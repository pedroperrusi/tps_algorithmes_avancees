#!/bin/bash

echo 'Building project...'

# create build directory if it doesn't exist
mkdir -p build 
cd build
cmake ../ 