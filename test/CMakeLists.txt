### Testing Level CMake File
#
# Define executable name and source code
add_executable(
    minimal_tests  # Executable name
    hello_world_tests.cpp # Source code
    image_tests.cpp
    transformation_tests.cpp
    similarity_tests.cpp
    deformImage_tests.cpp
  )

# Link dependencies 
target_link_libraries(
    minimal_tests # Linking target
    recalage_lib # Library to be tested
    gtest_main
  )

target_include_directories(
    minimal_tests
    PUBLIC
    ${CMAKE_HOME_DIRECTORY}/include
  )

# Effectively add test 
add_test(
    NAME
    minimal_tests
    COMMAND
      ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR}/minimal_tests
  )
