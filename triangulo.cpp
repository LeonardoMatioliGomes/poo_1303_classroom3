#include <iostream>
using namespace std;

//inicio de um código
int main() {
    //elementos da resposta que quero
    float base, altura, area;
    
    //digitar a primeira variavel
    cout << "digite a base do triangulo: ";
    cin >> base;
    //digitar a segunda variavel
    cout << "digite a altura do triangulo: ";
    cin >> altura;
    
    //formula da conta
    area = (base * altura) / 2;
    
    //resposta da conta
    cout << "a area do triangulo eh:" << area << endl;

    return 0;
}