FLAGS = -Wall -Wno-unused-result

DEPS = Pessoa.h Livro.h
OBJ = Pessoa.cpp Livro.cpp main.cpp

%.o: %.cpp $(DEPS)
	g++ -g -c -o $@ $< $(FLAGS)

all: $(OBJ)
	g++ -g -o main $(OBJ) $(FLAGS)

clean:
	rm -f main *.o

run: 
	./main