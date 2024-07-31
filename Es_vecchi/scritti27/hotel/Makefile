CC=g++
CFLAGS=-std=c++11
DEPS= Hotel.h  Booking.h Date\Date.h
OBJ = main.o Date\Date.o

%.o:%.cpp $(DEPS)
		$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
		$(CC) -o $@ $^ $(CFLAGS)