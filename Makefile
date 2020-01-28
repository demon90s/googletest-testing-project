CC=g++
INCLUDE=./include
CPPFLAGS=-g -Wall -std=c++11
LDFLAGS=./lib/libgtest.a -lpthread

OBJS=src/main.o \
	src/gtest_base.o \
	src/DeathTest.o \
	src/ExceptionTest.o \
	src/TestFixture.o

all: main

main: $(OBJS)
	$(CC) $(CPPFLAGS) -o main $(OBJS) $(LDFLAGS)

%.o: %.cpp
	$(CC) -I$(INCLUDE) $(CPPFLAGS) -c $< -o $@

clean:
	-rm -f main src/*.o
