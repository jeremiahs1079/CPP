all: lab10.o Term.o
	g++ lab10.o Term.o -o lab10

lab10.o: lab10.cpp
	g++ -c lab10.cpp

Term.o: Term.cpp
	g++ -c Term.cpp

clean:
	rm -rf *.o