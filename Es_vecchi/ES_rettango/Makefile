testRett: testRett.o Rettangolo.o point.o
	g++ -o testRett Rettangolo.o testRett.o point.o
testRett.o: Rettangolo.h testRett.cpp 
	g++ -Wall -pedantic -std=c++11 -c testRett.cpp
Rettangolo.o: Rettangolo.h Rettangolo.cpp
	g++ -Wall -pedantic -std=c++11 -c Rettangolo.cpp
point.o: point.h point.cpp
	g++ -Wall -pedantic -std=c++11 -c point.cpp
