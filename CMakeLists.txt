# The following lines of boilerplate have to be in your project's CMakeLists
# in this exact order for cmake to work correctly
cmake_minimum_required(VERSION 3.8)
# include($ENV{IDF_PATH}/tools/cmake/project.cmake)

if(DEFINED IDF_PATH) # ESP32编译
project(ln_iot_framework)

else() # 其他编译
include(cmake/funcs.cmake)
include(cmake/platform.cmake)
include(cmake/vars.cmake)
project(ln_iot_framework VERSION 1.0)
# C++17 C17
set(CMAKE_C_STANDARD 17)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
add_compile_options("$<$<C_COMPILER_ID:MSVC>:/utf-8>")

foreach(COMPONENT_PATH ${COMPONENT_PATHS})
	message("add_subdirectory:${COMPONENT_PATH}")
	add_subdirectory(${COMPONENT_PATH})
endforeach()

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
add_executable(${PROJECT_NAME} ${MAIN_SOURCE} ${MAIN_HEADER})
include_all()
target_link_libraries(${PROJECT_NAME})
endif()
