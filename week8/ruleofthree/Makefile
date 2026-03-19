CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

all: geeksExe

geeksExe: main.o geeks.o
	$(CXX) main.o geeks.o -o geeksExe

main.o: main.cpp geeks.h
	$(CXX) $(CXXFLAGS) -c main.cpp

geeks.o: geeks.cpp geeks.h
	$(CXX) $(CXXFLAGS) -c geeks.cpp

clean:
	rm -f *.o *.gch geeksExe