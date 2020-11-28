/**
 * @file logger_base_test.h
 * @author your name (you@domain.com)
 * @brief logger testcase
 * @version 0.1
 * @date 2020-11-28
 */
#include "../src/logger.h"

void logger_base_test() {
  std::string s = "Hello world";

  logger::info(s);
  logger::warn(s);
  logger::error(s);
  logger::succeed(s);
}
