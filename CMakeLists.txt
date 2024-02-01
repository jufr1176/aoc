project(aoc)
include_directories(include)
file(GLOB SOURCES "src/*.cpp")
add_executable(aoc ${SOURCES})