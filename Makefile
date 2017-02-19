#INCLUDES = -I"include"
CXX=g++
CFLAGS=-c -Wall
LDFLAGS= -Wall
#SOURCES= $(wildcard *.cpp)
SOURCES= $(wildcard *.c)
#OBJECTS= $(SOURCES:%.cpp=build/%.o)
OBJECTS= $(SOURCES:%.c=build/%.o)
EXECUTABLE=build/main



.PHONY: directories clean

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(LDFLAGS) $(OBJECTS) -o $@

$(OBJECTS): build/%.o : %.c directories
	$(CXX) $(CFLAGS) $(INCLUDES) $< -o $@

directories:
	mkdir -p build

clean:
	rm -r build
