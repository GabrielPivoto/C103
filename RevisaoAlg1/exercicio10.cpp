#include <iostream>

using namespace std;

int main(){

    int inicio, fim, par = 0, impar = 0;

    cout << "Digite o valor de início: " << endl;
    cin >> inicio;

    cout << "Digite o valor de fim: " << endl;
    cin >> fim;

    if(fim < inicio)
        cout << "Valores inválidos" << endl;
    else
        for(int i = inicio; i <= fim; i++)
            if(i%2 == 0)
                par++;
            else
                impar++;

    cout << "Quantiade de valores pares: " << par << endl;
    cout << "Quantiade de valores impares: " << impar << endl;

    return 0;
}