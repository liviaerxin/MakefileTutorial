MakefileTutorial

Usage:

make

GNU Make Uitil have tow stages:
1. gcc -c *.c -I./include ----> generating *.o object files, *.h header files are all in include dir.
2. gcc -o main *.o -L./lib -lname ----> gather *.o to generate executable file, if no other libs to need, -L -l can be ignored.lib's name is libname corresponding to -lname(lib2xx, -l2xx). Actually suffix with .a .so lib consist of *.o(
ar t lib.a, will show you)