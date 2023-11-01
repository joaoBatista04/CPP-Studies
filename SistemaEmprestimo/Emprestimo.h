#ifndef EMPRESTIMO_H
#define EMPRESTIMO_H

#include <string>
#include "Pessoa.h"
#include "Livro.h"

using namespace std;

class Emprestimo
{
    Livro *l;
    Pessoa *p;
    bool isAtual;
public:
    Emprestimo(bool isAtual, Livro *l, Pessoa *p);
    Livro* getLivroEmprestado();
    Pessoa* getUsuario();
    bool isLivroDevolvido();
};

#endif