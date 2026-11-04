0. gcc -E "$CFILE" > c: runs a C file through the preprocessor and save the result into another file.
1. gcc -c "$CFILE": compiles a C file but does not link (extension .o). 
2. gcc -S "$CFILE": generates the assembly code of a C code and save it in an output file (extension .s).
3. gcc "$CFILE" > cisfun: compiles a C file and creates an executable named cisfun.
4. 4-puts.c: C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line. *puts automatically adds a newline! 
