#include "Pessoa.h"

Pessoa::Pessoa(string nome, int idade){
    this->nome = nome;
    this->idade = idade;
}

Pessoa::Pessoa(){}

string Pessoa::getNome(){
    return this->nome;
}

int Pessoa::getIdade(){
    return this->idade;
}