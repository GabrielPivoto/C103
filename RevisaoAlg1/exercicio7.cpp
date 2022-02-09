#include <iostream>

using namespace std;

int main(){

    int n;

    cout << "Digite um número inteiro qualquer: ";
    cin >> n;

    for(int i = 0; i <= 10; i++)
        cout << i << "x" << n << " = " << i*n << endl;

    return 0;
}