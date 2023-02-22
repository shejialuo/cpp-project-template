#include "example.hpp"

#include "spdlog/spdlog.h"

int add(int a, int b) {
  spdlog::info("a is {}", a);
  spdlog::info("b is {}", b);
  return a + b;
}
