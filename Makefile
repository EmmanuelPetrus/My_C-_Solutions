all: main point
main: pointers.o
	g++ pointers.o -o main
pointers.o: pointers.cpp
	g++ -c pointers.cpp
pointerexer.o: pointerexer.cpp
	g++ -c pointerexer.cpp
point: pointerexer.o
	g++ pointerexer.o -o point
virtual: virtual.o
	g++ virtual.o -o virtual
virtual.o: virtual.cpp
	g++ -c virtual.cpp
