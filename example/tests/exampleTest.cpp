#include "example.hpp"

#include <gtest/gtest.h>

TEST(Add, TestAdd) {
  ASSERT_EQ(add(1, 2), 3);
  ASSERT_EQ(add(2, 4), 6);
}
