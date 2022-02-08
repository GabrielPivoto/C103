#include <iostream>

using namespace std;

int main(){

    int num = 0;

    while(num != 888){

        cout << "Digite um número inteiro qualquer, ou 888 para sair: " << endl;
        cin >> num;

        if(num%2 == 0)
            cout << num << " é par!" << endl;
        else
            cout << num << " é impar!" << endl;
    }

    return 0;
}