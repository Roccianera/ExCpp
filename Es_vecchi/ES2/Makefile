invoice: invoice.o invoice_imp.o
	g++ -o invoice invoice.o invoice_imp.o
invoice_imp.o: invoice_imp.cpp Invoice.h
	g++ -Wall -pedantic -std=c++11 -c invoice_imp.cpp
invoice.o: invoice.cpp Invoice.h
	g++ -Wall -pedantic -std=c++11 -c invoice.cpp