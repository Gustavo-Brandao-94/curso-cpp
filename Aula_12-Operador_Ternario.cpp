#include <iostream>
using namespace std;

int main(){
    /*
    O operador ternário é um if simplificado, com um retorno simplificado, pra testes menos exigentes e uma resposta mais rápida
    */

//(expressão) ? valor1 : valor 2, onde "?" é um "se" e ":" o caso contrário
    float n1, n2, nota;
    string res;

    cout << "\nPor favor, digite a nota 1: ";
    cin >> n1;
    cout << "\nPor favor, digite a nota 2: ";
    cin >> n2;

    nota=(n1+n2)/2;

    // Se a nota for maior igual a 6.0, o aluno está aprovado
    // Se a nota for menor que 6.0, o aluno está reprovado

   /*
    (nota>=6.0)?res="Aprovado":res="Reprovado";
    */

   //outra forma de fazer o if ternário 

   res=(nota>=6.0)?"Aprovado":"Reprovado" //nesse caso eu indico aprovado e reprovado como valores de retorno

    cout << "\nSituacao do aluno: " << res << "\n"; 


    return 0;
}