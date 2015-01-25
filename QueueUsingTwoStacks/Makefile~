all: main

main: main.o UnsortedFunctions.o
	 g++ main.o stack.o -o main

main.o: main.cpp
	 g++ -c main.cpp

UnsortedFunctions.o: stack.cpp stack.hpp
	 g++ -c stack.cpp
clean : 
	 rm -rf *o main

