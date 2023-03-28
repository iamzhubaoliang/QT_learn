#include "manifileexception.h"

maniFileException::maniFileException(std::string errori)
{
    errorinfo=errori;
}

maniFileException::~maniFileException()
{

}

const char *maniFileException::what() const throw() {

    return errorinfo.c_str();
}
