
CC=g++
CFLAGS=-std=c++11
DEPS= Publication.h Book.h JournPaper.h 
OBJ = Publication.o Book.o JournPaper.o  test.o

%.o:%.cpp $(DEPS)
		$(CC) -c -o $@ $< $(CFLAGS)

test: $(OBJ)
		$(CC) -o $@ $^ $(CFLAGS)