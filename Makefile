CXX = g++
CXXFLAGS = -std=c++11 -Wall -Isrc/

all: test.o checksum.o
	mkdir -p bin
	$(CXX) $(CXXFLAGS) test.o checksum.o -o bin/checksum_executable
	rm *.o

test.o: test/test.cpp
	$(CXX) $(CXXFLAGS) -c test/test.cpp

checksum.o: src/checksum.h
	$(CXX) $(CXXFLAGS) -c src/checksum.cpp

delete:
	rm -r bin
