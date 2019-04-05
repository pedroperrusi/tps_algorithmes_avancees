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
        CostFunction.cpp
        Interpolation.cpp
        Transformation.cpp
        DeformImage.cpp
        Recalage.cpp
    PUBLIC
        ${CMAKE_HOME_DIRECTORY}/include/${PROJECT_NAME}/HelloWorld.h
        ${CMAKE_HOME_DIRECTORY}/include/${PROJECT_NAME}/Similarite.h
        ${CMAKE_HOME_DIRECTORY}/include/${PROJECT_NAME}/CostFunction.h
        ${CMAKE_HOME_DIRECTORY}/include/${PROJECT_NAME}/Point.h
        ${CMAKE_HOME_DIRECTORY}/include/${PROJECT_NAME}/Image.h
        ${CMAKE_HOME_DIRECTORY}/include/${PROJECT_NAME}/Parametres.h
        ${CMAKE_HOME_DIRECTORY}/include/${PROJECT_NAME}/DeformImage.h
        ${CMAKE_HOME_DIRECTORY}/include/${PROJECT_NAME}/Transformation.h
        ${CMAKE_HOME_DIRECTORY}/include/${PROJECT_NAME}/Interpolation.h
        ${CMAKE_HOME_DIRECTORY}/include/${PROJECT_NAME}/amoeba.h
    )

target_include_directories(
    recalage_lib
    PUBLIC
        ${CMAKE_HOME_DIRECTORY}/include
    )

target_link_libraries(recalage_lib)
