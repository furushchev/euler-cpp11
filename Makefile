CC=clang++
INC=-std=c++11 -Wall

SRC=$(wildcard src/*.cpp)
OBJS=$(addprefix bin/,$(notdir $(SRC:.cpp=.out)))

all: $(OBJS)

bin/%.out: src/%.cpp
	$(CC) $< $(INC) -o $@

clean:
	rm -f ./bin/*.out
