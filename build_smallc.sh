# This script will build smallc with the GCC compiler, as opposed to test.sh which builds with the C compile and then builds the compiler with smallc
gcc -m32 -w -o smallc smallc.c || exit 1
