
#ifndef __CHRONO_H__
#define __CHRONO_H__

#include <chrono>


class Chrono
{
public:
    Chrono();

    static void start();
    static long elapsed();

private:
    static std::chrono::time_point<std::chrono::steady_clock> _startTime;
};


#endif
