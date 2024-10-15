/*
 * Created by Steve Tchatchouang
 *
 * Copyright (c) 2022 All rights reserved
 */

#include "../include/timeutils/TimeUtils.hpp"
#include <string>
#include <iomanip>
#include <ctime>

thread_local timespec timeSpec{};

int64_t TimeUtils::current_time_in_millis()
{
    clock_gettime(CLOCK_REALTIME, &timeSpec);
    return (int64_t)timeSpec.tv_sec * 1000 + (int64_t)timeSpec.tv_nsec / 1000000;
}

int32_t TimeUtils::now()
{
    return (int32_t)(current_time_in_millis() / 1000);
}

std::string TimeUtils::format_current_time(std::string const &format){
    std::time_t t = std::time(nullptr);
    std::tm tm = *std::localtime(&t);

    std::stringstream ss;
    ss << std::put_time(&tm, format.c_str());
    return ss.str();
}