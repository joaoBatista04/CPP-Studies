#ifndef PESSOA_H
#define PESSOA_H

#include <string>

using namespace std;

class Pessoa
{
    string nome;
public:
    Pessoa(string name);
    string getNome();
};

#endif