#include <iostream>
using namespace std;

int main (){

    int num=10;
    cout << num << "\n\n";
    //metodo tradicional consiste em multiplicar o valor da variavel por -1
    num*=-1;
    cout << num << "\n\n";
    //metodo utilizando o operador de inversao, esse detalhe nao grava o valor na variavel, so faz a inversao momentaneamente
    cout << -num << "\n\n";

    return 0;
}
