#include <iostream>
using namespace std;

int main(){

    int num=10, num2=50, sol=1;

    char opc='s';

   /*no teste l�gico eu basicamente vou comparar o valor de duas variaveis, se a compara��o for verdadeira, ela me retorna true ou 1, se for falsa, false ou 0
    para isso eu uso os operadores de compara��o: >, <, >=,<=,== (igual),!= (diferente)
    Ex.: 10 < 5 = False; 50 > 25 = True;

    se(teste l�gico){
    se o teste for verdadeiro, ele executa o bloco de comandos que t� dentro desse parenteses, se n�o ele simplesmente sai e n�o executa os comandos dentro do parenteses

    }se n�o{
    se o teste for falso, ele executa esse bloco de comandos

    }*/

    if (num >=10){
        cout << "Valor de num e maior ou igual que 10.\n";
    }else{
        cout << "Valor de num e menor que 10.\n";
    }

    if (sol=1){
        cout << "Vou ao clube\n";
    }else{
        cout << "Vou ao cinema\n";
    }
    //quando eu tenho uma vari�vel booleana, eu n�o preciso colocar compara��o no if, apenas "sol" bastaria.
    return 0;
}
