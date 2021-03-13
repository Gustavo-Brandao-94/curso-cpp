#include <iostream>
using namespace std;
int main (){

    int n1,n2;
    n1=0; n2=10;

    cout << n1 << "\n\n"; // impressão antes do incremento
    //n1=n1+1; //incremento básico da variável n1
    n1+=1;//forma comprimida de fazer o incremento ( poderia fazer n1+=5, caso quisesse incrementar 5)
    // caso eu queira incrementar 1, eu posso escrever o código na forma n1++
    cout << n1 << "\n\n"; // impressão após o incremento

    cout << n2 << "\n\n"; // impressão antes do incremento
    n2-=3; //decremento contraido da variável n1
    //posso usar n-- caso queira decrementar uma unidade
    cout << n2 << "\n\n"; // impressão após o incremento

    // a forma n1+=, pode ser usada com outros operadores para o incremento. Ex.: n1*=2

    // pós e pré-fixados

    cout << n2++ << "\n\n"; // nesse caso ele vai imprimir a variável n2 e depois realizar o incremento unitário

    cout << ++n2 << "\n\n"; // nesse caso ele vai primeiro realizar o incremento unitário e depois imprimir a variável

    return 0;
}
