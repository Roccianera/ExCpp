CFLAGS = -std=c++11 -Wall -pedantic
DEPS = Student.h Subject.h
OBJ = main.o Student.o 

%.o: %.cpp $(DEPS)
	g++ -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	g++ -o main $^ ${CFLAGS}