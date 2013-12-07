gcc -E hello_world.c -o hello_world.i
gcc -S hello_world.i -o hello_world.s
as hello_world.s -o hello_world.o
#ld path uses the path on my 64 bit centos
#http://www.lisha.ufsc.br/teaching/os/exercise/hello.html

gcc_lib_path=`gcc -print-file-name=`
ld -static /usr/lib64/crt1.o /usr/lib64/crti.o $gcc_lib_path/crtbeginT.o hello_world.o -L$gcc_lib_path --start-group -lc -lgcc -lgcc_eh --end-group $gcc_lib_path/crtend.o /usr/lib64/crtn.o -o hello_world
