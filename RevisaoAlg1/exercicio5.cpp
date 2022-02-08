#include <iostream>

using namespace std;

int fatorial(int n){
    int fat = 1;
    for(int i = 1; i <= n; i ++)
        fat*=i;
    return fat;
}

int main(){

    int n;

    cout << "Digite um número inteiro qualquer: " << endl;
    cin >> n;

    cout << "O fatorial de " << n << " é " << fatorial(n) << endl;

    return 0;
}