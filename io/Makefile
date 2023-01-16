# io makefile
CC = g++
TARGET = main

.PHONY: main
main: main.cpp
	g++ $(TARGET).cpp -o $(TARGET)

.PHONY: run
run: main
	./main

.PHONY: all
all: main run

.PHONY: clean
clean:
	rm $(TARGET)