//
// Created by Steve Tchatchouang
//

#ifndef TKS_TIME_UTILS
#define TKS_TIME_UTILS

#include <cstdint>
#include <limits>
#include <chrono>
#include <string>
#include <string>

class TimeUtils
{
private:

public:
    TimeUtils(const TimeUtils &) = delete;
    void operator=(const TimeUtils &) = delete;
    static int64_t current_time_in_millis();

    //current time in sec
    static int32_t now();

    static std::string format_current_time(const std::string &format);
};

#endif // TKS_TIME_UTILS
