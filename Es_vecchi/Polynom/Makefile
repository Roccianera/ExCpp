
# polynomial project

# compilatore
CC = g++
# flag per il compilatore
CFLAGS = -std=c++11 -pedantic -Wall
# lista delle dipendenze: i file .h contengono i nomi delle funzioni
DEPS = Polynom.h
# file oggetto
OBJS = Polynom.o main.o

# ricetta per ogni file .o: sezrve il file .cpp con lo stesso nome, più le dipendenze
# il comando può essere tradotto come segue:
# g++ -c -o main.o main.cpp Polynom.h -std=c++11 -pedantic -Wall
%.o: %.cpp ${DEPS}
	${CC} -c -o $@ $< ${CFLAGS}

# ricetta per l'eseguibile: servono tutti i file oggetto
main: ${OBJS}
	${CC} -o $@ $^ ${CFLAGS}