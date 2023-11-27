#include "departamento.hpp"
#include <iostream>
using namespace std;

Departamento::Departamento(string nome): nome(nome){
}

void Departamento::mudaNome(string newNome) const{
    cout << this->nome;
}

string Departamento::getNome(){
    return this->nome;
}