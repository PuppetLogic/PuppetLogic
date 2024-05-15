
#include <iostream>
#include "Logger.h"
#include "Chrono.h"


std::unordered_map<Logger::Level, std::pair<std::string, std::ostream*>> Logger::_levels = {
    {Logger::Level::Debug, { "DEBUG", &std::cout } },
    {Logger::Level::Info, { "INFO", &std::cout } },
    {Logger::Level::Warning, { "WARNING", &std::cerr } },
    {Logger::Level::Error, { "ERROR", &std::cerr } },
    {Logger::Level::Fatal, { "FATAL", &std::cerr } }
};

void Logger::log(Level level, char const* filePath, char const* function, int line, std::string const& message, std::ostream* output)
{
    if (!output)
    {
        output = _levels[level].second;
    }

    *output << "#[" << _logId++ << "]["
        << Chrono::elapsed() << "]["
        << _levels[level].first << "] "
        << filePath << " ("
        << function
        << ") line: " << line
        << " -> " << message << "\n" ;
}
