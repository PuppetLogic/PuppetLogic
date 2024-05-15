
#ifndef __LOGGER_H__
#define __LOGGER_H__

#include <sstream>
#include <unordered_map>


class Logger
{
public:
    enum class Level
    {
        Debug,
        Info,
        Warning,
        Error,
        Fatal
    };

    static void log(Level level, char const* filePath, char const* function, int line, std::string const& message, std::ostream* output = nullptr);
private:

    static std::unordered_map<Level, std::pair<std::string, std::ostream*>> _levels;

    static inline int _logId = 0;
};

#define STATIC_LOG(level, ...) \
    do {                \
        std::stringstream logs; \
        logs << __VA_ARGS__; \
        Logger::log(level, __FILE__, __func__, __LINE__, logs.str()); \
    } while (0)

#endif
