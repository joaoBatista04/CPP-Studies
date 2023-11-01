#include "Emprestimo.h"

Emprestimo::Emprestimo(bool isAtual, Livro *l, Pessoa *p)
{
    this->isAtual = isAtual;
    this->l = l;
    this->p = p;
}

Livro* Emprestimo::getLivroEmprestado()
{
    return this->l;
}

Pessoa* Emprestimo::getUsuario(){
    return this->p;
}

bool Emprestimo::isLivroDevolvido(){
    return this->isAtual;
}
