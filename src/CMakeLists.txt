### Library Level CMake
#
# Here you shoud link your libraries files
#
add_library(recalage_lib "")

# Inform source and include directories
target_sources(
    recalage_lib
    PRIVATE
        HelloWorld.cpp
        Similarite.cpp
    PUBLIC
        ${CMAKE_HOME_DIRECTORY}/include/${PROJECT_NAME}/HelloWorld.h
        ${CMAKE_HOME_DIRECTORY}/include/${PROJECT_NAME}/Similarite.h
    )

target_include_directories(
    recalage_lib
    PUBLIC
        ${CMAKE_HOME_DIRECTORY}/include
    )

target_link_libraries(recalage_lib)
