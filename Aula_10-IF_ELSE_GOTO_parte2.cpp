#include <iostream>
#include <cstdlib> //biblioteca que preciso adicionar pra colocar comandos do DOS
using namespace std;

int main () {

    float n1,n2,res;
    char opc;


    inicio: // os dois pontos indica que isso é um "label", pra começar o meu loop do goto

    system("cls"); //com isso eu puxo um comando lá do DOS, pra limpar o terminal a cada volta do loop
    cout << "Digite o valor da nota 1: \n";
    cin >> n1;
    cout << "Digite o valor da nota 2: \n";
    cin >> n2;

    res=(n1+n2)/2;

    /*
        Para notas >=7.0, o aluno está aprovado.
        Notas entre 3.0 e 7.0 o aluno está de recuperacao
        Notas menores que 3.0, o aluno está reprovado.
    */

    if (res>=7.0){
        cout<<"Sua media final e: "<<res<<"."<<"\nVoce esta Aprovado.\n";
    }else if(res>=3.0){
        cout<< "Sua media final e: "<<res<<"."<<"\nVoce esta de Recuperacao.\n";
    }else{
        cout<<"Sua media final e: "<<res<<"."<<"\nVoce esta Reprovado.\n";
    }
        cout<<"\nDeseja digitar outras notas? (s/n): \n";
        cin>>opc;

        if(opc=='s' or opc=='S'){
            goto inicio;
        }

	return 0;
}
