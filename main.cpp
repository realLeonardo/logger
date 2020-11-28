#include <iostream>

#include "./test/logger_base_test.h"

int main() {
  try {
    logger_base_test();
  } catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
  }

  return 0;
}