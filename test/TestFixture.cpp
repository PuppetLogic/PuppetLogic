
#include "TestFixture.h"

#include <thread>


int TestFixture::wait(int timeOut)
{
    Chrono totalTime;

    while (totalTime.elapsed() < timeOut)
    {
        std::this_thread::yield();
    }

    return static_cast<int>(totalTime.elapsed());
}
