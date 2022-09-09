C - Hello, World

In this project I write:
0- a script that runs a C file through the preprocessor and save the result into another file.
	- The C file name will be saved in the variable $CFILE
	- The output should be saved in the file c
1- a script that compiles a C file but does not link.
	- The C file name will be saved in the variable $CFILE
	- The output file should be named the same as the C file, but with the extension .o instead of .c
		Example: if the C file is main.c, the output file should be main.o
2- a script that generates the assembly code of a C code and save it in an output file.
	- The C file name will be saved in the variable $CFILE
	- The output file should be named the name the same as the C file, but with the extension .s instead of .c
		Example: if the C file is main.c, the output file should be main.s
3- a script that compiles a C file and creates an executable named cisfun.
	- The C file name will be saved in the variable $CFILE.
4- a C program that prints exactly "Programming is like building a multilingual puzzle,
", followed by a new line.
	- Use the function puts
	- No use of printf
	- The program should end with the value 0
5- a C program that prints exactly with proper grammar, but outcome is a piece of art, ,followed by a new line
	- Use the function printf
	- No use of the function puts
	- The program should return 0
	- The program should compile without warning when using the -Wall gcc option
6- a C program that prints the size of various types on the computer it is ompiled and run on.
	- Produce the exact same output as in the example
	- Warnings are not allowed
	- The program should return 0
	- Might have to install the package libc6-dev-i386 on Linux to test the -m32 gcc option

