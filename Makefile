CXX = g++  # the compiler
CXXFLAGS = -std=c++17 -Wall

all: test

clean:
	rm test

test: test.cpp 
	$(CXX) test.cpp -o test
