main: Pessoa.o Livro.o main.o 
	g++ -o main Pessoa.o Livro.o main.o 
main.o: Pessoa.h Livro.h main.cpp
	g++ -c -o main.o main.cpp
Livro.o: Pessoa.h Livro.cpp
	g++ -c -o livro.o livro.cpp
Pessoa.h: Pessoa.cpp
	g++ -c -o Pessoa.o Pessoa.cpp
run:
	./main
clean:
	rm -rf main *.o
