cmake_minimum_required(VERSION 3.2)

set(SOURCE_FILES romanizer_test.cpp)

add_executable(romanizer_test ${SOURCE_FILES})


find_package(GTest REQUIRED)

target_link_libraries(romanizer_test
    romanizer
    GTest::Main
)

install(TARGETS romanizer_test DESTINATION bin)