#include "Pessoa.h"

Pessoa::Pessoa(string name)
{
    this->nome = name;
}

string Pessoa::getNome(){
    return this->nome;
}