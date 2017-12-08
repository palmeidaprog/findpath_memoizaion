OBJECTS = src/main.cpp src/coord.cpp
EXEC = bin/fnd
CXXFLAGS = -Wall -std=c++11
CXX = g++

all: $(OBJECTS)
	$(CXX) -g $(CXXFLAGS) -o $(EXEC) $(OBJECTS)
