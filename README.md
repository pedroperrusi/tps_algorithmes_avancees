# Algorithmes Avancées 2018-19

### Group

- FONTES-DE-ARAUJO Isabela
- GABRIEL Kathleen
- GUYOMARD Barbara
- MENDES-FERREIRA Lucas Emílio
- SURUAGY PERRUSI Pedro Henrique

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

### Project Structure

The project structure is based on [mini_cpp_proj](https://github.com/pedroperrusi/mini_cpp_proj).
Most of the example files were not yet removed.

```(bash)
.
├── CMakeLists.txt
├── LICENSE
├── README.md
├── app
│   ├── CMakeLists.txt
│   └── main.cpp
├── cmake
│   ├── googletest-download.cmake
│   └── googletest.cmake
├── include
│   └── recalage
│       ├── CostFunction.h
│       ├── DeformImage.h
│       ├── Image.h
│       ├── Interpolation.h
│       ├── Parametres.h
│       ├── Point.h
│       ├── Similarite.h
│       ├── TP_point_h.zip
│       └── Transformation.h
├── scripts
│   ├── build.sh
│   ├── clean.sh
│   ├── cmake.sh
│   ├── run.sh
│   └── run_tests.sh
├── src
│   ├── CMakeLists.txt
│   ├── CostFunction.cpp
│   ├── HelloWorld.cpp
│   ├── Interpolation.cpp
│   ├── Similarite.cpp
│   └── Transformation.cpp
└── test
    ├── CMakeLists.txt
    └── hello_world_tests.cpp
```