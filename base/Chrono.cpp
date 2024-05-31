
#include "Chrono.h"


std::chrono::time_point<std::chrono::steady_clock> Chrono::_startTime;

Chrono::Chrono()
{
    start();
}

void Chrono::start()
{
    _startTime = std::chrono::steady_clock::now();
}

long Chrono::elapsed()
{
    return std::chrono::duration_cast<std::chrono::milliseconds>(
        std::chrono::steady_clock::duration(std::chrono::steady_clock::now() - _startTime)).count();
}
