#ifndef COMMONVARIBLE_H
#define COMMONVARIBLE_H

#include "commonVarible_global.h"
#include "spdlog/spdlog.h"

class COMMONVARIBLE_EXPORT CommonVarible
{
public:
    CommonVarible();
    static const  spdlog::level::level_enum logFlag=spdlog::level::debug;

};

#endif // COMMONVARIBLE_H
