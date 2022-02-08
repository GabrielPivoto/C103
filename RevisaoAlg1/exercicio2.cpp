#include <iostream>

using namespace std;

int main(){

    double a, b, c;

    cout << "Digite o valor da constante a: " << endl;
    cin >> a;

    cout << "Digite o valor da constante b: " << endl;
    cin >> b;

    cout << "Digite o valor da constante c: " << endl;
    cin >> c;

    double delta = (b*b)-(4*a*c);
    cout << "O valor de delta é: " << delta;

    if(delta > 0)
        cout << ", portanto a equação possui duas raízes reais e diferentes " << endl;
    else if(delta == 0)
        cout << ", portanto a equação possui duas raízes reais e iguais " << endl;
    else
        cout << ", portanto a equação não possui raízes reais " << endl;

    return 0;
}