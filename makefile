CXX = g++  # the compiler
CXXFLAGS = -std=c++17 -Wall  # flags for the compiler (use c++17 standards, turn on all optional warnings); add -ggdb if you want to use gdb to debug!

all: test

test: test.cpp
	$(CXX) $(CXXFLAGS) test.cpp -o test

# functions_to_implement.o: functions_to_implement.cpp
# 	$(CXX) $(CXXFLAGS) -c functions_to_implement.cpp

# runs for "make clean"
clean:
	rm test
