CC=g++
INCLUDE=./include
CPPFLAGS=-g -Wall -std=c++11
LDFLAGS=./lib/libgtest.a -lpthread
OBJS=main.o gtest_base.o

all: main

main: $(OBJS)
	$(CC) $(CPPFLAGS) -o main $(OBJS) $(LDFLAGS)

%.o: %.cpp
	$(CC) -I$(INCLUDE) $(CPPFLAGS) -c $< -o $@

clean:
	-rm -f main *.o
