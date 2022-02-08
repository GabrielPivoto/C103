#include <iostream>

using namespace std;

void somar(double n1, double n2){
    cout << "Resultado da soma: " << n1 + n2 << endl;
}

void subtrair(double n1, double n2){
    cout << "Resultado da subtração: " << n1 - n2 << endl;
}

void multiplicar(double n1, double n2){
    cout << "Resultado da multiplicação: " << n1 * n2 << endl;
}

void dividir(double n1, double n2){
    if(n2 == 0)
        cout << "Divisão por zero!" << endl;
    else
        cout << "Resultado da divisão: " << n1 / n2 << endl;
}

int main(){

    double n1, n2;
    int n3;

    cout << "Digite o primeiro número: " << endl;
    cin >> n1;

    cout << "Digite o segundo número: " << endl;
    cin >> n2;

    cout << "Digite qual deseja realizar: " << endl;
    cout << "1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão " << endl;
    cin >> n3;

    switch(n3){

        case 1:
            somar(n1,n2);
            break;

        case 2:
            subtrair(n1,n2);
            break;

        case 3:
            multiplicar(n1,n2);
            break;

        case 4:
            dividir(n1,n2);
            break;

        default:
            cout << "Operação inválida! " << endl; 
    }

    return 0;
}