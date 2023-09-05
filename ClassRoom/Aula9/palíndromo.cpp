/*Um palíndromo é um número  inteiro positivo, sem zeros à esquerda,
que é o mesmo se  lido da esquerda para a direita ou da direita para
a esquerda. */


#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int n;
    int ultimoDigito = 0;
    cin >> n;

    ultimoDigito = n % 10;

    

    if( n >=0 && ultimoDigito == 0){//ultimo digito já é 0 e n é negativo não está definido nos conjuntos.
        cout << "Não é um políndromo" <<endl;
    }else{
        string s = to_string (n); //convertendo valor em uma string
        int primeiroDigito = s[0] - '0';
        if(primeiroDigito != 0 && ultimoDigito != 0){
            //acho que vai ter que usar um while mesmo
            
            
        }else{
            cout << "Não é um políndromo" <<endl;
        }

    }
    return 0; // retorna zero para indicar que o programa terminou sem erros
}