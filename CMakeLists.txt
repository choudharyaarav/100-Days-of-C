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
    add_executable(${TARGET_NAME} ${PROGRAM}
            Day-10/Q19.c
            Day-10/Q20.c
            Day-11/Q21.c
            Day-11/Q22.c
            Day-12/Q23.c
            Day-12/Q24.c
            Day-13/Q25.c
            Day-13/Q26.c
            Day-14/Q27.c
            Day-14/Q28.c
            Day-15/Q29.c
            Day-15/Q30.c
            Day-16/Q31.c
            Day-16/Q32.c
            Day-17/Q33.c
            Day-17/Q34.c
            Day-18/Q35.c
            Day-18/Q36.c
            Day-19/Q37.c
            Day-19/Q38.c
            Day-20/Q39.c
            Day-20/Q40.c
            Day-21/Q41.c
            Day-21/Q42.c
            Day-22/Q43.c
            Day-22/Q44.c
            Day-23/Q45.c
            Day-23/Q46.c
            Day-24/Q47.c
            Day-24/Q48.c
            Day-25/Q49.c
            Day-25/Q50.c
            Day-26/Q51.c
            Day-26/Q52.c)
endforeach()
