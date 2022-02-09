#include <iostream>

using namespace std;

int main(){

    double soma = 0, media = 0, num;

    for(int i = 0; i < 15; i++){
        cout << "Digite o valor de um número: " << endl;
        cin >> num;
        soma+=num;
    }
    media = soma/15;

    cout << "A média aritmética dos números é: " << media << endl;

    return 0;
}