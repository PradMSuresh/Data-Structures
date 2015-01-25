all: main

main: main.o HashFunctions.o
	 g++ main.o HashMap.o -o main

main.o: main.cpp
	 g++ -c main.cpp

HashFunctions.o: HashMap.cpp HashMap.hpp
	 g++ -c HashMap.cpp
clean : 
	 rm -rf *o main

