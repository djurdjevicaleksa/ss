set -xe

gcc -c ss.c -o ss.o
gcc -c example.c -o example.o
gcc example.c ss.o -o example

rm ss.o example.o
./example