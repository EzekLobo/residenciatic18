#include<iostream>

using namespace std;
//Este programa imprime as operações básicas da matemática com o adcional do resto da divisão na linguagem C++
int main (){
    int a, b;
    cout << "Digite dois numéros:";
    cin >> a >>b;

    cout << "Soma = "<< a+b <<endl;
    cout << "Subtracao = " << a-b <<endl;
    cout << "Multiplicacao = " << a*b << endl;
    cout << "Divisao = " << a/b << endl;
    cout << "Resto = " << a%b << endl;
}