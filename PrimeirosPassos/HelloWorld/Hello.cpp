//g++ -c -o hello.o hello.c - CRIA OS ARQUIVOS .o SEM LINKAR COM OS DEMAIS
//g++ -o hello hello.o - LINKA OS ARQUIVOS E COMPILA PARA UM EXECUTAVEL

#include <iostream>

using namespace std;

int main(){
    cout << "Hello World!\n";
    
    string s = "JP";
    cout << "Hello " << s << "!" << endl;
}