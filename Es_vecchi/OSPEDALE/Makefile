CFLAGS = -std=c++11 -Wall -pedantic
DEPS = Doctor.h Prenotation.h
OBJ = driver.o  

%.o: %.cpp $(DEPS)
	g++ -c -o $@ $< $(CFLAGS)

driver: $(OBJ)
	g++ -o main $^ ${CFLAGS}