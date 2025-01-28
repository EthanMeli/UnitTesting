# This is an example make file

CXX = g++
CXXFLAGS = -std=c++17 -Wall -Werror -Wpedantic

# runs for "make all"
all: test

# runs for "make main"
# the line below this one must be TABBED in (not spaces!)
test: test.cpp functions_to_implement.o
	$(CXX) $(CXXFLAGS) test.cpp -o test
functions_to_implement.o: functions_to_implement.cpp
	$(CXX) $(CXXFLAGS) -c functions_to_implement.cpp
# runs for "make clean"
clean:
	rm test functions_to_implement.o