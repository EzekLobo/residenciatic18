#include <iostream>
#include <string>
using namespace std;


int modulo(int a);
int divisor(int numero);
// n numeros de visores de um número k temos que considerar que a divisão é exata 
// e que para n > k, não é valido pois sempre será falso essa afirmação e como queremos, mais 
// não sabemos para os n < k se a divisão é exata. Portanto devemos considerar par n < k, iniciando de 1 já que não é possivel dividir um numero por 0,
// do intervalo dos positivos. e podemos considerar o inverso para negativos também.

//k/n é igual a um inteiro y; onde n > 0.

int main(){
  
    int numero;
    std::cin >> numero;
    divisor(numero);

    return 0;
}

int divisor( int  numero){

    int num = modulo(numero);
    //num / i = y inteiro

    for (int i  = 1; i <= num; i++){

      if (num % i == 0){

        if (numero < 0){ //caso o numero seja negativo
            cout << -i << endl;
        }else{
             cout << i << endl;
        }

      }
    } 
}

int modulo(int a){

    if (a < 0){
        a = -(a); 
        return  a;
    }

    return a;
}