#include "logger.h"
#include <stdio.h>
#include <iostream>
#include <cstdarg>

Logger2* Logger2::_instance = nullptr;

Logger2 *Logger2::getInstance()
{
    if (_instance == nullptr)
    {
        _instance = new Logger2();
    }
    return _instance;
}

void Logger2::log(const char *message, ...)
{
    int n;
    char* buffer;
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
