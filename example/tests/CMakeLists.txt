enable_testing()

add_executable(
  exampleTest
  exampleTest.cpp
)

target_include_directories(exampleTest PRIVATE ../)

target_link_libraries(
  exampleTest
  example
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(exampleTest)
