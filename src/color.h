/*
 * color.h
 * contain used color symbol
 */
#ifndef LOGGER_COLOR_H
#define LOGGER_COLOR_H

namespace logger {

namespace CONST_COLOR {
const char* RESET = "\033[0m";
const char* RED = "\033[31m";
const char* GREEN = "\033[32m";
const char* YELLOW = "\033[33m";
const char* BLUE = "\033[34m";

const char* BOLDRED = "\033[1m\033[31m";
const char* BOLDGREEN = "\033[1m\033[32m";
const char* BOLDYELLOW = "\033[1m\033[33m";
const char* BOLDBLUE = "\033[1m\033[34m";
}  // namespace CONST_COLOR

}  // namespace logger

#endif
