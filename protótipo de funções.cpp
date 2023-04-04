#include <iostream>

using namespace std;

// funções necessarias para resolver as formulas
double somar(double a, double b) {
    return a + b;
}

double subtrair(double a, double b) {
    return a - b;
}

double dividir(double a, double b) {
    if (b == 0) {
        cout << "Erro: divisão por zero!" << endl;
        return 0;
    } else {
        return a / b;
    }
}
//valor das variaveis
int main() {
    double x = 2;
    double y = 5;

    // soma
    double resultado = somar(x, y);
    cout << x << " + " << y << " = " << resultado << endl;

    // subtração
    resultado = subtrair(x, y);
    cout << x << " - " << y << " = " << resultado << endl;

    // divisão
    resultado = dividir(x, y);
    cout << x << " / " << y << " = " << resultado << endl;

    return 0;
}
