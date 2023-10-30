#include <iostream>
using namespace std;

#include "Pessoa.h"
#include "Livro.h"


int main(){
    Pessoa p("Joao Pedro", 19);

    cout << p.getNome() << " " << p.getIdade();

    Livro l("Teste", &p);

    cout << l.getTitulo() << " " << l.getAutor()->getNome();
}