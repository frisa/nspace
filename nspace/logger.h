#ifndef LOGGER_H
#define LOGGER_H


class Logger2
{
protected:
    Logger2(){};
    static Logger2* _instance;
public:
    static Logger2* getInstance();
    void log(const char* message, ...);
};

#endif // LOGGER_H
