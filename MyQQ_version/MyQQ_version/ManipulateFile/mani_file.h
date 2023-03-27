#ifndef MANI_FILE_H
#define MANI_FILE_H

#include <string>
#include <iostream>
#include <fstream>


class   mani_file
{


public:
      mani_file();
      ~mani_file();
      bool createFile(std::string fileName);
      bool openFileForRead(std::string fileName, std::ios_base::openmode openmMode);
//
//      bool writeFileLine(std::string content);
      char* readFileForImage();
      void closeFile();

private:
      std::ios_base::openmode openmMode;
      std::string fileName;
      std::ifstream readF;
   };

#endif // MANI_FILE_H
