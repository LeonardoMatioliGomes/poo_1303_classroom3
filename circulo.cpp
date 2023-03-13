//um comando começando
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

//o código se formando
int main() {
    //declaração de calculos 
    float raio, area;
    const float PI = 3.14159;
    
    //interface do usuário
    cout << "digite o raio do circulo:";
    cin >> raio;
    
    //a formula da conta
    area = PI * raio * raio;
    
    //resposta da formula
    cout << "a area do circulo eh:" << area << endl;

    return 0;
}