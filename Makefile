all: imain.o sample.o other/myother.o
	g++ imain.o sample.o other/myother.o -o all
imain.o: imain.cpp
	g++ -c imain.cpp
sample.o: sample.cpp sample.h
	g++ -c sample.cpp
myother.o: other/myother.cpp
	g++ -c other/myother.cpp

clean: 
	rm -rf *.o other/*.o

