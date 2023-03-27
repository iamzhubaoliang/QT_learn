#include "mani_file.h"
#include <string.h>
#include <fstream>
mani_file::mani_file()
{

}

bool mani_file::createFile(std::string fileName)
{
    std::ofstream newfile(fileName,std::ios::app);
    if(newfile.is_open())
    {
        std::printf("打开文件成功");
        std::printf("%s",&fileName);
        newfile.close();
        return true;
    }
    return false;
}
