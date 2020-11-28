/**
 * @file logger_base.h
 * @brief use for colorful console print
 * @version 0.1
 * @date 2020-11-28
 */
#ifndef LOGGER_BASE_H
#define LOGGER_BASE_H

#include <iostream>
#include <string>

#include "./color.h"

namespace logger {
using std::cout;
using std::endl;
using std::string;

using namespace logger::CONST_COLOR;

void log(int type, string& message);

void info(string& message) { log(0, message); }

void warn(string& message) { log(1, message); }

void error(string& message) { log(2, message); }

void succeed(string& message) { log(3, message); }

/**
 * @brief Common log function in logger_base
 *
 * @param type int. The output message's type
 * @param message string.
 */
void log(int type, string& message) {
  switch (type) {
    case 0: {
      cout << message << endl;
      break;
    }
    case 1: {
      // Note: If you don't use RESET the color will remain changed until the
      // next time you use a color code.
      cout << YELLOW << message << RESET << endl;
      break;
    }
    case 2: {
      cout << RED << message << RESET << endl;
      break;
    }
    case 3: {
      cout << GREEN << message << RESET << endl;
      break;
    }
    default: {
      cout << message << endl;
    }
  }
}

}  // namespace logger

#endif
