#include <iostream>
using namespace std;
int main (){

    int n1,n2;
    n1=0; n2=10;

    cout << n1 << "\n\n"; // impress�o antes do incremento
    //n1=n1+1; //incremento b�sico da vari�vel n1
    n1+=1;//forma comprimida de fazer o incremento ( poderia fazer n1+=5, caso quisesse incrementar 5)
    // caso eu queira incrementar 1, eu posso escrever o c�digo na forma n1++
    cout << n1 << "\n\n"; // impress�o ap�s o incremento

    cout << n2 << "\n\n"; // impress�o antes do incremento
    n2-=3; //decremento contraido da vari�vel n1
    //posso usar n-- caso queira decrementar uma unidade
    cout << n2 << "\n\n"; // impress�o ap�s o incremento

    // a forma n1+=, pode ser usada com outros operadores para o incremento. Ex.: n1*=2

    // p�s e pr�-fixados

    cout << n2++ << "\n\n"; // nesse caso ele vai imprimir a vari�vel n2 e depois realizar o incremento unit�rio

    cout << ++n2 << "\n\n"; // nesse caso ele vai primeiro realizar o incremento unit�rio e depois imprimir a vari�vel

    return 0;
}
