#if !defined(DEPARTAMENTO_H)
#define DEPARTAMENTO_H

#include <string>

using namespace std;

class Departamento{
    string nome;

public:
    Departamento(string nome);
    void mudaNome(string newName) const;
    string getNome();
};

#endif