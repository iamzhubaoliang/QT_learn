#include "mani_file.h"
#include <string.h>
#include<iostream>
#include <fstream>
mani_file::mani_file()
{

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

bool mani_file::openFileForRead(std::string fileName, std::ios_base::openmode openmMode)
{

    std::ifstream readFile(fileName,openmMode);
    if(readFile.is_open())
    {
        mani_file::fileName=fileName;
        mani_file::openmMode=openmMode;
        return true;
    }
    return false;

}

char *mani_file::readFileForImage()
{

     unsigned int size = mani_file::readF.tellg();
     char *buffer = new char[size + 1];
     if (size > 0)
                     {
                         mani_file::readF.seekg(0, std::ios::beg);
                         mani_file::readF.read(buffer, size);  // 将图片二进制数据放到buffer中
                         buffer[size] = 0;
                     }
     return buffer;
}

void mani_file::closeFile()
{
    if(readF.is_open())
        readF.close();
}









