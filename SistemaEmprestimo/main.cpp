#include <iostream>
using namespace std;

#include "Pessoa.h"
#include "Livro.h"
#include "Emprestimo.h"

int main(){
    Pessoa m("Machado de Assis");
    Livro l("Dom Casmurro", &m);
    Pessoa fulano("Fulano");
    Emprestimo e(true, &l, &fulano);

    cout << e.getLivroEmprestado()->getAutor()->getNome() << endl;
}