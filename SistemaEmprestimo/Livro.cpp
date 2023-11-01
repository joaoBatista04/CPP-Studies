#include "Livro.h"

Livro::Livro(string name, Pessoa* p)
{
    this->titulo = name;
    this->autor = p;
}

string Livro::getTitulo(){
    return this->titulo;
}

Pessoa* Livro::getAutor(){
    return this->autor;
}