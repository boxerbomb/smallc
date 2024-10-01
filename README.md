# smallc
Derivative of Ron Cain's Small C Compiler


To Run:
First build smallc with either test.sh or build_smallc.sh

Next compile example.c with the command 'compile_now.sh example.c'


For homebrew CPU, and custom assembler will need to be made and a standard library.
Standard library fucntions can either be written in assembly by hand, or they can be written by smallC.
Things like fopen, freopen, getc, fgetc, putc, fgetc, fputc, fclose, fflush, exit, feof, ferror, getchar(), putchar(), gets(), fgets, rewind

will need to be written by hand. Refer to the Dr Dobbs journal article on the small c standard library.
