.PHONY: all
CC = g++ -std=c++11 -stdlib=libc++
SRC = ./src
BIN = ./bin
TEST = ./test
CFLAG = -Wfatal-errors
LIB = -lgtest -lpthread

#all: target
all: clean mkdir $(BIN)/ut_all

$(BIN)/ut_all : $(TEST)/ut_main.cpp 
	$(CC) $(CFLAG) -o $@ $^ $(LIB)
	# $@ -> the name of target
	# $^ -> ALL dependenices of this target
	# $< -> the first dependenices of this target
mkdir:
	mkdir -p bin obj

.PHONY: clean
clean:
	rm -f bin/*
	rm -f obj/*

