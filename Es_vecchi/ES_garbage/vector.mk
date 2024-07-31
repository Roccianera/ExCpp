vector_g: vector_g.o
	g++ -o vector_g vector_g.o
vector_g.o: vector_g.cpp 
	g++ -Wall -pedantic -std=c++11 -c vector_g.cpp