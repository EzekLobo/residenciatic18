/* 
    Primeiro programa em C++
    Este programa exibe a mensagem "Hello, Word" no monitor
*/

#include <iostream> // incluir os recursos da biblioteca de entrada e saída
using namespace std; //usar o namespace std

int main (void)
{
    cout << "Qual sua idade? ";
    int idade; // idade é uma variável de tipo inteiro 

    cin >> idade;
    cout << "Voçê tem " << idade << "anos.\n";

    return 0;

}