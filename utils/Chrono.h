
#ifndef __CHRONO_H__
#define __CHRONO_H__

#include <chrono>


class Chrono
{
public:
    Chrono();

    void start();
    int64_t elapsed();

private:
    std::chrono::time_point<std::chrono::steady_clock> _startTime;
};


#endif //__CHRONO_H__
