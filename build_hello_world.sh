gcc -E hello_world.c -o hello_world.i
gcc -S hello_world.i -o hello_world.s
as hello_world.s -o hello_world.o
#ld xxxx.o hello_world.o 
