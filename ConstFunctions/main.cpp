#include <iostream>
using namespace std;

#include "departamento.hpp"

int main(){
    Departamento d("RH");

    cout << d.getNome() << endl;

    d.mudaNome("rh");

    cout << d.getNome() << endl;
}