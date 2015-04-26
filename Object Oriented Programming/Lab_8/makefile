all: WordList.o FlashCard.o
	g++ -o lab8 WordList.o FlashCard.o

WordList.o: WordList.cpp WordList.h
	g++ -c WordList.cpp

FlashCard.o: FlashCard.cpp
	g++ -c FlashCard.cpp

clean:
	rm -rf *.o