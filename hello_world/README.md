0. gcc -E "$CFILE" > c: runs a C file through the preprocessor and save the result into another file.
1. gcc -c "$CFILE": compiles a C file but does not link (extension .o). 
2. gcc -S "$CFILE": generates the assembly code of a C code and save it in an output file (extension .s). 
