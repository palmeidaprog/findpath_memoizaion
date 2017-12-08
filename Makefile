OBJECTS = src/main.cpp src/coord.cpp
EXEC = bin/fnd
CXXFLAGS = -Wall
CXX = g++

all: $(OBJECTS)
	$(CXX) -g $(CXXFLAGS) -o $(EXEC) $(OBJECTS)
