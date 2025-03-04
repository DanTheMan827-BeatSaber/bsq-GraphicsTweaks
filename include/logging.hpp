#pragma once

#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/logging.hpp"

//#define LOG_INFO(value...)
#define INFO(str, ...) Paper::Logger::fmtLogTag<Paper::LogLevel::INF>(str, "GraphicsTweaks" __VA_OPT__(, __VA_ARGS__))
//#define LOG_DEBUG(value...)
#define DEBUG(str, ...) Paper::Logger::fmtLogTag<Paper::LogLevel::DBG>(str, "GraphicsTweaks" __VA_OPT__(, __VA_ARGS__))
//#define LOG_ERROR(value...)
#define ERROR(str, ...) Paper::Logger::fmtLogTag<Paper::LogLevel::ERR>(str, "GraphicsTweaks" __VA_OPT__(, __VA_ARGS__))
#define WARNING(str, ...) Paper::Logger::fmtLogTag<Paper::LogLevel::WRN>(str, "GraphicsTweaks" __VA_OPT__(, __VA_ARGS__))
#define CRITICAL(str, ...) Paper::Logger::fmtLogTag<Paper::LogLevel::CRIT>(str, "GraphicsTweaks" __VA_OPT__(, __VA_ARGS__))

namespace GraphicsTweaks {
    static constexpr auto Logger = Paper::ConstLoggerContext("GraphicsTweaks");
}
