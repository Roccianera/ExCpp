
CC=g++
CFLAGS=-std=c++11
DEPS= Task.h Project.h Programmer.h 
OBJ= driver.o  Project.o Date\Date.o


%.o:%.cpp $(DEPS)
		$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
		$(CC) -o $@ $^ $(CFLAGS)




