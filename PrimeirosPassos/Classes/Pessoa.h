#ifndef PESSOA_H
#define PESSOA_H

#include <string>

using namespace std;

class Pessoa{
    string nome;
    int idade;
public:
    Pessoa();
    Pessoa(string nome, int idade);
    string getNome();
    int getIdade();
};

#endif