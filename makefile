CC = gcc
CXX = g++
CFLAGS = -std=c17
CXXFLAGS = -std=c++17

all: test_c test_cpp

test_c: test.c
	$(CC) $(CFLAGS) -o test_c test.c

test_cpp: test.cpp
	$(CXX) $(CXXFLAGS) -o test_cpp test.cpp

clean:
	rm -f test_c test_cpp
