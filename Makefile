all: imain.o sample.o
	g++ imain.o sample.o -o all
imain.o: imain.cpp
	g++ -c imain.cpp
sample.o: sample.cpp sample.h
	g++ -c sample.cpp

clean: 
	rm -rf *.o

