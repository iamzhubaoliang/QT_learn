#include "mani_file.h"
#include <string.h>
#include<iostream>
#include <fstream>
mani_file::mani_file()
{

}

mani_file::~mani_file(){}

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
