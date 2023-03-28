#ifndef MANIFILEEXCEPTION_H
#define MANIFILEEXCEPTION_H
#include <exception>
#include <iostream>
#include<string>

class maniFileException:public std::exception
{
public:
    std::string errorinfo;
    maniFileException(std::string errori);
    virtual ~maniFileException();
    const char * what() const throw();

};

#endif // MANIFILEEXCEPTION_H
