#include <iostream>

using namespace std;

int main(){

    int inicio, fim;

    cout << "Digite o valor de início: " << endl;
    cin >> inicio;

    cout << "Digite o valor de fim: " << endl;
    cin >> fim;

    if(fim < inicio)
        cout << "Valores inválidos" << endl;
    else{
        cout << "Valores pares entre " << inicio << " e " << fim << endl;
        for(int i = inicio; i <= fim; i++)
            if(i%2 == 0)
                cout << i << endl;
    }
    return 0;
}