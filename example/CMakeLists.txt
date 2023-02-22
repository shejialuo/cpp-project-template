add_library(example STATIC example.cpp)

target_link_libraries(example spdlog::spdlog)

add_subdirectory(./tests)
