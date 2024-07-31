
# Diceial project

# compilatore
CC = g++
# flag per il compilatore
CFLAGS = -std=c++11 -pedantic -Wall
# lista delle dipendenze: i file .h contengono i nomi delle funzioni
DEPS = Dice.h
# file oggetto
OBJS = Dice.o test.o

# ricetta per ogni file .o: sezrve il file .cpp con lo stesso nome, più le dipendenze
# il comando può essere tradotto come segue:
# g++ -c -o main.o main.cpp Dice.h -std=c++11 -pedantic -Wall
%.o: %.cpp ${DEPS}
	${CC} -c -o $@ $< ${CFLAGS}

# ricetta per l'eseguibile: servono tutti i file oggetto
test: ${OBJS}
	${CC} -o $@ $^ ${CFLAGS}