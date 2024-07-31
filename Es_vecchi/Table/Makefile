
CC=g++
CFLAGS=-std=c++11
DEPS= table.h RettangleTable.h RoundTable.h TraingleTable.h Fabric.h
OBJ = test.o Fabric.o

%.o:%.cpp $(DEPS)
		$(CC) -c -o $@ $< $(CFLAGS)

test: $(OBJ)
		$(CC) -o $@ $^ $(CFLAGS)