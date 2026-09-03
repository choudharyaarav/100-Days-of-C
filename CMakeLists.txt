cmake_minimum_required(VERSION 4.2)
project(100_Days_of_C C)

set(CMAKE_C_STANDARD 11)

file(GLOB_RECURSE DAILY_PROGRAMS CONFIGURE_DEPENDS
        "${CMAKE_SOURCE_DIR}/Day-*/Q*.c"
)

foreach(PROGRAM ${DAILY_PROGRAMS})
    get_filename_component(FILE_NAME ${PROGRAM} NAME_WE)
    get_filename_component(DAY_DIR ${PROGRAM} DIRECTORY)
    get_filename_component(DAY_NAME ${DAY_DIR} NAME)

    set(TARGET_NAME "${DAY_NAME}_${FILE_NAME}")
    add_executable(${TARGET_NAME} ${PROGRAM})
endforeach()