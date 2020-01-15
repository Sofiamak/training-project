all: restart

create: main.cpp
	g++ -c main.cpp -o bin/main.o
	g++ -o main bin/main.o 

clean:
	rm -rf bin/*.o	
	rm -rf main

run: create
	./main

restart: clean  run
