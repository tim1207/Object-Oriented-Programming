.PHONY: all

all: src/vector.h test/ut_main.cpp mkdir
	g++ -std=c++11 -stdlib=libc++ test/ut_main.cpp  src/vector.cpp  src/polygon.cpp src/circle.cpp src/bubblesort.cpp -o bin/ut_all -lgtest -lpthread

ut_all:test/ut_main.cpp mkdir

mkdir:
	mkdir -p bin obj

.PHONY:clean

clean:
	rm -f bin/*
	rm -f obj/*


