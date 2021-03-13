#include <iostream>
using namespace std;

int main () {

/*
O operador AND ou && ou E, retorna um resultado verdadeiro apenas se todas as entradas forem verdadeiras.
O operador OR ou || ou OU, me retorna verdadeiro se uma das minhas entradas for verdadeira.
O operador NOT ou ! ou NÃO (nesse caso eu quero um teste de negação). Ex. "Se tal coisa não for verdadeira".
*/

// Teste lógico na Faixa de valores inteiros de 1 a 10
    int num1,num2,num3;
    cout << "Digite 2 numeros de 1 a 10: \n";
    cin >> num1 >> num2;
    cout << "Hoje está chovendo?(1 para sim/0 para não): ";
    cin >> num3;

//teste com and
    if(num1>4 && num1<7){
        cout << "\nO valor do primeiro numero esta na faixa desejada.\n";
    }else{
        cout << "\nO valor do primeiro numero nao esta na faixa.\n";
    }
//teste com or
    if(num2<3 || num2>9){
        cout << "\nO valor do segundo numero esta na faixa desejada.\n";
    }else{
        cout << "\nO valor do segundo numero nao esta na faixa.\n";
        }
//teste com not
    if(!num3){
        cout << "\nVou a Praia.\n";
}else{
        cout << "\nFicarei em casa.\n";
}
	return 0;
}
