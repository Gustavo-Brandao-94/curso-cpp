#include <iostream>

using namespace std;

int main (){

    //preciso colocar TIPO  e NOME;
    //TIPO NOME = VALOR;

    int vidas=0; //vari�vel do tipo inteira, pode receber n�meros inteiros como valor (25);
    char letra='a'; //vari�vel do tipo caract�re, recebe uma letra, precisa estar com '' ('B');
    double decimal=2.47; // vari�vel que vai ter casas decimais (2.4999999);
    float decimal2=2.47; //id�ntico ao tipo double, mas com uma precis�o menor (2.5);
    bool verificador=true; //vari�vel do tipo verdadeiro ou falso, true or false;
    string texto="Gustavo"; // vari�vel que recebe mais de um car�ctere, precisa estar entre "" ("top");
    //char letras[5]='legal'; //nesse caso eu crio um vetor de caract�res que pode ter at� 20 letras, cada letra em uma posi��o;

    cout << "Digite o n�mero de vidas: "; //esse comando me pede pra entrar com algo
    cin >> vidas; //esse � o comando pra eu entrar com o valor da vari�vel
    cout << "Digite uma letra: ";
    cin >> letra;

    cout << "Eu tenho n�mero de vidas: " << vidas << "\nMinha letra �: " << letra << "\nMeu n�mero decimal �: " << decimal << "\nMeu segundo decimal �: " << decimal2 << "\nO resultado do meu teste de virifica��o �: " << verificador << "\nMinha palavra �: " << texto << "\nTexto";

    return 0;
}
