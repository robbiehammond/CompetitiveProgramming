CC = g++
CXXFLAGS = -std=c++17 -DLOCAL -O2
INPFILE = inp.txt

all: run

run: a.out
	./a.out < $(INPFILE)

a.out: problem.cpp
	$(CC) $(CXXFLAGS) $< -o $@

clean:
	rm -f a.out
