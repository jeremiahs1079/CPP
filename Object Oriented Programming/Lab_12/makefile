all: Package.o TwoDayPackage.o lab12.o
	g++ Package.o TwoDayPackage.o lab12.o -o lab12

Package.o: Package.cpp Package.h
	g++ -c Package.cpp

TwoDayPackage.o: TwoDayPackage.cpp TwoDayPackage.h
	g++ -c TwoDayPackage.cpp

lab12: lab12.cpp Package.o TwoDayPackage.o
	g++ -c lab12.cpp

clean:
	rm -rf *.o