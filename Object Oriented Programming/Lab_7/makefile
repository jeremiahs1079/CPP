all: Oscillator.o testOscillator.o
	g++ Oscillator.o testoscillator.o -o lab7

Osscilator.o: Oscillator.cpp
	g++ Oscillator.cpp -c

testOscillator.o: testOscillator.cpp
	g++ testOscillator.cpp -c

clean:
	rm -rf *.o
