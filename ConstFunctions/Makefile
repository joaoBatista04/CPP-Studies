FLAGS = -Wall -Wno-unused-result

DEPS = departamento.hpp
OBJ = departamento.cpp main.cpp

%.o: %.cpp $(DEPS)
	g++ -g -c -o $@ $< $(FLAGS)

all: $(OBJ)
	g++ -g -o main $(OBJ) $(FLAGS)

clean:
	rm -f main *.o

run: 
	./main