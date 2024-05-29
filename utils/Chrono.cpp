
#include "Chrono.h"


Chrono::Chrono()
{
    start();
}

void Chrono::start()
{
    _startTime = std::chrono::steady_clock::now();
}

int64_t Chrono::elapsed()
{
    return std::chrono::duration_cast<std::chrono::milliseconds>(
        std::chrono::steady_clock::duration(std::chrono::steady_clock::now() - _startTime)).count();
}
