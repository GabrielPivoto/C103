#include <iostream>

using namespace std;

int main(){

    double maior = -99999, n;

    for(int i = 0; i < 15; i++){
        cout << "Digite o valor de um número: " << endl;
        cin >> n;
        if(n >maior)
            maior = n;
    }

    cout << "O maior número digitado foi: " << maior << endl;

    return 0;
}