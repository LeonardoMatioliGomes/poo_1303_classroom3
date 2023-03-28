#include <iostream>
#include <cmath>

using namespace std;

int main() {
    //declaração de variaveis
    double cateto1, cateto2, hipotenusa;
    //interface para o usuario digitar o valor
    cout << "Digite o valor do primeiro cateto: ";
    cin >> cateto1;
    //interface para o usuario digitar o segundo valor
    cout << "Digite o valor do segundo cateto: ";
    cin >> cateto2;
    //formula para calcular a hipotenusa
    hipotenusa = sqrt(cateto1*cateto1 + cateto2*cateto2);
    //resultado
    cout << "A hipotenusa é: " << hipotenusa << endl;
    
    return 0;
}