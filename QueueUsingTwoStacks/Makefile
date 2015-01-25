all: main

main: main.o UnsortedFunctions.o
	 g++ main.o Queue.o -o main

main.o: main.cpp
	 g++ -c main.cpp

UnsortedFunctions.o: Queue.cpp Queue.hpp
	 g++ -c Queue.cpp
clean : 
	 rm -rf *o main

