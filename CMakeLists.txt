cmake_minimum_required(VERSION 3.2)
project(nanovg LANGUAGES C)

message(WARNING "Currently, this file is testing purpose only. If you want build demo, please use Premake")

add_library(nanovg STATIC src/nanovg.c)

find_package (Freetype)
if(FREETYPE_FOUND)
add_library(nanovg_ft STATIC src/nanovg.c)
target_compile_definitions(nanovg_ft PRIVATE FONS_USE_FREETYPE)
target_include_directories(nanovg_ft PRIVATE ${FREETYPE_INCLUDE_DIRS})
target_link_libraries(nanovg_ft ${FREETYPE_LIBRARIES})
endif(FREETYPE_FOUND)

enable_testing()
add_subdirectory(tests)