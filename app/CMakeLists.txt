### Application Level Cmake
#
# Definition of the executable file.
# Target linking with the libraries and dependencies
#
add_executable(
    hello_world_main
    main.cpp
    )

target_include_directories(
    hello_world_main
    PUBLIC
        ${CMAKE_HOME_DIRECTORY}/include
    )

target_link_libraries(hello_world_main recalage_lib)
