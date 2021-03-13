#include <iostream>
using namespace std;

int n1,n2; //variáveis globais

int main(){

    int n3,n4; //variáveis locais
    int res;
    n1=11;n2=3;n3=5;n4=2;

    //operadores matemáticos: + - / * % ()
    res=n1+n2+n3+n4;
    cout << "Soma de todas as variaveis: " << res << "\n\n";
    // posso fazer as mais variadas operações, só não posso esquecer da ordem de precedência dos operadores
    // lembrando que % é um operador de resto da divisão

    return 0;
}
