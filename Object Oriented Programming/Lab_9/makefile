all: Time.o TimeTest.o WorldTime.o
	g++ Time.o TimeTest.o WorldTime.o -o TimeTest

Time.o: Time.cpp
	g++ -c Time.cpp

WorldTime.o: WorldTime.cpp
	g++ -c WorldTime.cpp

TimeTest.o: Time.cpp
	g++  -c TimeTest.cpp

clean:
	rm -rf *.o