#include <iostream>

using namespace std;

int main (){

    //preciso colocar TIPO  e NOME;
    //TIPO NOME = VALOR;

    int vidas=0; //variável do tipo inteira, pode receber números inteiros como valor (25);
    char letra='a'; //variável do tipo caractére, recebe uma letra, precisa estar com '' ('B');
    double decimal=2.47; // variável que vai ter casas decimais (2.4999999);
    float decimal2=2.47; //idêntico ao tipo double, mas com uma precisão menor (2.5);
    bool verificador=true; //variável do tipo verdadeiro ou falso, true or false;
    string texto="Gustavo"; // variável que recebe mais de um caráctere, precisa estar entre "" ("top");
    //char letras[5]='legal'; //nesse caso eu crio um vetor de caractéres que pode ter até 20 letras, cada letra em uma posição;

    cout << "Digite o número de vidas: "; //esse comando me pede pra entrar com algo
    cin >> vidas; //esse é o comando pra eu entrar com o valor da variável
    cout << "Digite uma letra: ";
    cin >> letra;

    cout << "Eu tenho número de vidas: " << vidas << "\nMinha letra é: " << letra << "\nMeu número decimal é: " << decimal << "\nMeu segundo decimal é: " << decimal2 << "\nO resultado do meu teste de virificação é: " << verificador << "\nMinha palavra é: " << texto << "\nTexto";

    return 0;
}
