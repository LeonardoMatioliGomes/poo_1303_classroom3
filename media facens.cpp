#include <iostream>
#include <stdlib.h>
using namespace std;
//inserindo bibliotecas
int main() {
    //nomeando as variaveis
    double ac1, ac2, af;
    //digitando primeira nota
    cout << "Digite a sua nota da ac1 >>>";
    cin >> ac1;
    //digitando segunda nota
    cout << "Digite a sua nota da ac2 >>>";
    cin >> ac2;
    //digitando terceira nota
    cout << "Digite a sua nota da af >>>";
    cin >> af;
    //formula da nota para media
    ac1 = (ac1 * 0.15);
    ac2 = (ac2 * 0.35);
    af = (af * 0.50);
    //soma das notas
    double soma = (ac1 + ac2 + af);
    //resposta da sua media 
    cout << "A sua média do semestre foi: " << soma << endl << endl;
    if (soma >= 5) {
        //caso tenha sido acima de 5
        cout << "Parabéns! Você foi aprovado!" << endl;
    }else{
        //caso tenha sido abaixo de 5
        cout << "Eita! Você foi reprovado" << endl;
    }
    return 0;

}