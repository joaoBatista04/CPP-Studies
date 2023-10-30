#ifndef LIVRO_H
#define LIVRO_H

#include "Pessoa.h"

class Livro{
    string titulo;
    Pessoa autor;
public:
    Livro(string titulo, Pessoa autor);
    Livro(string titulo, Pessoa* autor);
    string getTitulo();
    Pessoa* getAutor();
};

#endif