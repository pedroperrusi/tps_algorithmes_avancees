# mini_cpp_proj

Evolutive model of a basic C++ project structure based on CMake and GTest.

The main reference for creating this project is [GitLab Modern CMake](https://cliutils.gitlab.io/modern-cmake/) webpage.
Even though the project structure is quite charged it may be a starting point for C++ projects in the future.

### Objective
Serve as a starting point for building test driven C++ libraries on CMake.
The library itself should be defined in the src folder (as usual) and its unittests should be defined in the test folder.
An example application which uses the library and other dependencies may be developed on the app folder.

### How to use It?

In order to generate the cmake and build the project, the following Unix commands may be used :
```(bash)
bash scripts/cmake.sh
bash scripts/build.sh
```

To launch unit tests from the test folder, simply call
```(bash)
bash scripts/tun_tests.sh
```

Finally, to call the main application defined on the app folder :
```(bash)
bash scripts/run.sh
```
