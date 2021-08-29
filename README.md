# GRAAL
**G**ene**R**ic **A**rray **A**lgorithms **L**ibrary.

GRAAL is a C++ library for handling generic types.


## Compile using cmake

Compilation and testing of each program can be done using cmake, for example you want to run the find program:

```
cd find
mkdir build
cd build
cmake ..
cmake --build .
```
The build generates an executable named run_tests inside the build folder, __in windows__ this executable is in the Debug folder. Right after compilation, to run the generated program use the commands:

### In linux:
```
./run_tests
```
### In windows:
```
.\Debug\run_tests.exe
```

## Compile Using g++

It is also possible to compile the program using g++, for that use the example command below. for this example we will use find:

```
cd find
g++ ../test_manager/src/test_manager.cpp src/main.cpp -I./include -I../test_manager/include -o run_tests
```
In this case, regardless of whether it is windows or linux, the executable is generated in the current directory, just running it later.
