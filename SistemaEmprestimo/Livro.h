#ifndef LIVRO_H
#define LIVRO_H

#include <iostream>
using namespace std;

#include "Pessoa.h"

class Livro
{
    string titulo;
    Pessoa* autor;
public:
    Livro(string name, Pessoa* pessoa);
    string getTitulo();
    Pessoa* getAutor();
};

#endif