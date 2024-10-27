main: main.o linkedlist.o
	g++ -o main main.o linkedlist.o
	./main

main.o: main.cpp linkedlist.h
	g++ -c main.cpp

linkedlist.o: linkedlist.cpp linkedlist.h
	g++ -c linkedlist.cpp

clean:
	rm *.o main
