#include <iostream>
using namespace std;

int n1,n2; //vari�veis globais

int main(){

    int n3,n4; //vari�veis locais
    int res;
    n1=11;n2=3;n3=5;n4=2;

    //operadores matem�ticos: + - / * % ()
    res=n1+n2+n3+n4;
    cout << "Soma de todas as variaveis: " << res << "\n\n";
    // posso fazer as mais variadas opera��es, s� n�o posso esquecer da ordem de preced�ncia dos operadores
    // lembrando que % � um operador de resto da divis�o

    return 0;
}
