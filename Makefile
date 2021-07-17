#Makefile
all: add-nbo

add-nbo: add-nbo.o
	g++ -o add-nbo.o add-nbo

add-nbo.o: add-nbo.cpp
	gcc -c add-nbo.cpp


clean:
	rm -f add-nbo
	rm -f *.o
