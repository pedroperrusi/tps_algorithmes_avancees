### Testing Level CMake File
#
# Define executable name and source code
add_executable(
    minimal_tests  # Executable name
    hello_world_tests.cpp # Source code
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
      unit
    COMMAND
      ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR}/unit_tests
  )
