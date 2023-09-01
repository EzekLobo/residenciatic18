#include<iostream>
#include<iomanip> //utilização da configuração setprecision e fixed;
using namespace std;
//Este programa muda a declaração das variaveis decladas no arquivo meuprog2 do tipo int para float de forma manual
 //e imprime as operações básicas da matemática na linguagem C++
int main (){
    float a, b;
    cout << "Digite dois numéros:";
    cin >> a >>b;

    //fixando valores de saída de uma casa decimais apos a a vinfula ou ponto para todos os cout
    cout << fixed <<setprecision(1);

    cout << "Soma = "<< a+b <<endl;
    cout << "Subtracao = " << a-b <<endl;
    cout << "Multiplicacao = " << a*b << endl;
    cout << "Divisao = " << a/b << endl;
    
}