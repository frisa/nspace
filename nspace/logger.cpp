#include "logger.h"
#include <stdio.h>
#include <iostream>
#include <cstdarg>
#include <ctime>

Logger2* Logger2::_instance = nullptr;

Logger2 *Logger2::getInstance()
{
    if (_instance == nullptr)
    {
        _instance = new Logger2();
    }
    return _instance;
}

const std::string currentDateTime()
{
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    // Visit http://en.cppreference.com/w/cpp/chrono/c/strftime
    // for more information about date/time format
    strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);

    return buf;
}

void Logger2::log(const char *message, ...)
{
    std::cout << "[" << currentDateTime() << "] : ";
    va_list args;
    va_start(args, message);
    while (*message != '\0') {
        if (*message == '%')
        {
            ++message;
            if (*message == 'd') {
                int i = va_arg(args, int);
                std::cout << i;
            } else if (*message == 'c') {
                // note automatic conversion to integral type
                int c = va_arg(args, int);
                std::cout << static_cast<char>(c);
            } else if (*message == 'f') {
                double d = va_arg(args, double);
                std::cout << d;
            }
        }
        else
        {
            std::cout << *message;
        }
        ++message;
    }
    va_end(args);
    std::cout << std::endl;
}
