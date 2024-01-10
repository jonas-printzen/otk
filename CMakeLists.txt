cmake_minimum_required(VERSION 3.27)

project( otk VERSION 0.1.0 LANGUAGES CXX )

include(cmake/${CMAKE_BUILD_TYPE}.cmake)

# All files in the source-dir included in build!
file(GLOB OTK_SRC src/*.cpp )
file(GLOB OTK_HDR include/*.hpp )

add_library(otk ${OTK_SRC} )

target_include_directories( otk PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/include
)

pzen_validate(otk)

# Have to include at least one of the deps-files...
include( ${CMAKE_BINARY_DIR}/generators/GTestConfig.cmake )
# Generate compile_flags from conan-deps
configure_file( ${CMAKE_CURRENT_SOURCE_DIR}/cmake/compile_flags.templ ${CMAKE_CURRENT_SOURCE_DIR}/compile_flags.txt)
