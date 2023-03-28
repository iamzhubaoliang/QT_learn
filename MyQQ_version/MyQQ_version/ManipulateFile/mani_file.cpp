#include "mani_file.h"
#include <string>
#include<iostream>
#include <fstream>
#include <cstring>
#include "manifileexception.h"
#include "spdlog/spdlog.h"
#include "commonvarible.h"
mani_file::mani_file()
{
    spdlog::set_level(CommonVarible::logFlag);
}

mani_file::~mani_file(){}
/**
 * @brief mani_file::createFile only openfile then close file,on the
 * other word this function only create file.
 * @param fileName
 * @return bool
 */
bool mani_file::createFile(std::string fileName)
{
    std::ifstream f(fileName.c_str());
    if(f.good())//如果存在不用创建
        return true;

    std::ofstream newfile(fileName,std::ios::app);
    if(newfile.is_open())
    {

        newfile.close();
        return true;
    }
    return false;
}
/**
 * @brief mani_file::openFile open file ,you must close the file after finish
 * reading or writing the file.
 * @param fileName
 * @param openmMode
 * @return bool
 */

bool mani_file::openFileForRead(std::string fileName, std::ios_base::openmode openmMode,std::fstream *readF)
{

    std::fstream readFile(fileName,openmMode);
    if(readFile.is_open())
    {
        mani_file::fileName=fileName;
        mani_file::openmMode=openmMode;
        readF = &readFile;
//        spdlog::info("已经成功打开");
        return true;
    }
    return false;

}

char *mani_file::readFileForImage(std::fstream *readF)
{

     unsigned int size = readF->tellg();
     char *buffer = new char[size + 1];
     if (size > 0)
                     {
                         readF->seekg(0, std::ios::beg);
                         readF->read(buffer, size);  // 将图片二进制数据放到buffer中
                         buffer[size] = 0;
                     }
     return buffer;
}


char* mani_file::readOneLine(std::fstream *readF)
{
    std::string out;
    char *buffer;
    try{

        if(readF->is_open())
        {
            if(std::getline(*readF,out))
            {
            buffer=new char[out.length()+1];
            strcpy(buffer,out.c_str());
            return buffer;
            }else
            {
                spdlog::info("读取结束");
                return NULL;//读取结束
            }
        }else
         {
            throw maniFileException("没有打开文件");
        }
    }catch(maniFileException e){
        e.what();
        //此处应该记录日志
        spdlog::error("错误为{}", e.what());
    }
    return NULL;
}


void mani_file::closeFile(std::fstream *readF)
{
    if(readF->is_open())
        readF->close();
}









