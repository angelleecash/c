CC = gcc
CPP = g++
INCLUDE = -I ~/lua-5.2.2/src/ -I ~/expat/lib
CFLAGS = -std=c99 -O4 -Wall -g $(SYSCFLAGS) $(MYCFLAGS) $(INCLUDE)
CPPFLAGS = -Wall -g
LDFLAGS = $(SYSLDFLAGS) $(MYLDFLAGS)
LIBS = -lm -ldl $(SYSLIBS) $(MYLIBS)

SYSCFLAGS =
MYCFLAGS = 

EXPAT_LIB = ~/expat/.libs/libexpat.a
EXPAT_SO = ~/expat/.libs/libexpat.so


SYSLIBS = 
MYLIBS = 

SYSLDFLAGS = 
MYLDFLAGS =

default: 

how_memory_allocation_works: how_memory_allocation_works.o util.o
	$(CC) $(CFLAGS) -o $@ $(LDFLAGS) how_memory_allocation_works.o util.o $(LIBS) 

casts: casts.o util.o
	$(CPP) $(CPPFLAGS) -o $@ $(LDFLAGS) casts.o util.o $(LIBS) 
xml:
	$(CC) $(CFLAGS) $(INCLUDE) -fPIC --share -o xml.so xml.c $(EXPAT_SO)

proc:
	$(CC) $(CFLAGS) $(INCLUDE) -pthread -fPIC --share -o proc.so proc.c 



c_stuff.o: c_stuff.c
lua_call_c.o: lua_call_c.c
lua_config.o: lua_config.c
c_call_lua.o: c_call_lua.c
string.o: string.c
closure.o: closure.c
thread.o: thread.c
how_memory_allocation_works.o: how_memory_allocation_works.c
util.o: util.c
casts.o: casts.cpp

clean:
	rm -f *.o c_call_lua lua_config lua_call_c c_stuff string closure *.so
