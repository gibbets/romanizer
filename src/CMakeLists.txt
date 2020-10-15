cmake_minimum_required(VERSION 3.2)

set(SOURCE_FILES romanizer.cpp)

add_library(romanizer STATIC ${SOURCE_FILES} )

install(TARGETS romanizer DESTINATION lib})