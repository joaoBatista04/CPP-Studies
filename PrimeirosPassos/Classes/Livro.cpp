#include "Livro.h"

Livro::Livro(string titulo, Pessoa autor){
    this->titulo = titulo;
    this->autor = autor;
}

Livro::Livro(string titulo, Pessoa* autor){
    this->titulo = titulo;
    this->autor = *autor;
}


string Livro::getTitulo(){
    return this->titulo;
}

Pessoa* Livro::getAutor(){
    return &(this->autor);
}