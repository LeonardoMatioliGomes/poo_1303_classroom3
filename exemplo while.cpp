#include <iostream>
using namespace std;

int main() {
    int num, i=1;
    //interação para digitar um numero inteiro
    cout <<"digite um numero inteiro positivo: ";
    cin>>num;
    //codigo sendo executado
    while (i <= num) {
        cout <<i<<" ";
        i++;
    }
    
    return 0;
}