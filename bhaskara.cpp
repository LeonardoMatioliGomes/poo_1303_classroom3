//começo de uma programação
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //interface para usuario inserir os valores
    float a, b, c, x1, x2, delta;
    cout <<"digite o valor de a:";
    cin >> a;
    cout <<"digite o valor de b:";
    cin >> b;
    cout <<"digite o valor de c:";
    cin >> c;
    //formula para fazer bhaskara
    delta = pow(b, 2) -4 * a * c;
    
    if(delta = a ) {
        x1 = (b + sqrt(delta))/(2*a);
        x2 = (b + sqrt(delta))/(2*a);
    //resposta da formula
        cout << "as raizes da equação" <<x1<< "e" <<x2<< endl;
    }
else  {
    //caso não tenha resposta
    cout <<"a equacao nao tem raises reais." << endl;
}

    return 0;
}
