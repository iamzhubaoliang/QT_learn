#ifndef MANI_FILE_H
#define MANI_FILE_H

#include <string>


class   mani_file
{


public:
      mani_file();
      ~mani_file();
      bool createFile(std::string fileName);

//    bool openFile(std::string fileName);
//    bool writeFileLine(std::string content);
};

#endif // MANI_FILE_H
