
CC=g++
CFLAGS=-std=c++11
DEPS= Biscuits.h EBA.h
OBJ = driver.o  EBA.o Biscuits.o
%.o:%.cpp $(DEPS)
		$(CC) -c -o $@ $< $(CFLAGS)

driver: $(OBJ)
		$(CC) -o $@ $^ $(CFLAGS)