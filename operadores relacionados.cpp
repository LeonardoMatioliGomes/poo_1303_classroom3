//inicio do código
#include <iostream>
using namespace std;
//valor das variaveis de X e Y
int main () {
    int x = 10;
    int y = 20;
    //caso o valor é maior
    if (x>y) {
        cout <<"x é maior que y" << endl;
    }
    //caso o valor é menor
    if (x<y) {
        cout <<"x é menor que y" << endl;
    }
    //caso o valor é maior ou igual
    if (x >= y) {
        cout << "x é maior ou igual a y" << endl;
    }
    //caso valor é menor ou igual
    if (x <= y) {
        cout << "x é menor ou igual a y" << endl;
    }
    //caso o valor for diferente
    if (x != y) {
        cout << "x é diferente de y" << endl;
    }
    return 0;
}