#include <iostream>

using namespace std;

int main(){

    double preco;
    int idade;

    cout << "Digite sua idade: " << endl;
    cin >> idade;

    cout << "Digite o preço do produto: " << endl;
    cin >> preco;

    if(idade < 30)
        cout << "Você terá de pagar R$" << preco - preco*0.2 << endl;
    else if(idade >= 30 && idade <= 60)
        cout << "Você terá de pagar R$" << preco - preco*0.3 << endl;
    else
        cout << "Você terá de pagar R$" << preco - preco*0.4 << endl;

    return 0;
}