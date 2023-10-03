#include <iostream>

using namespace std;

int main ()
{
    //dois primeiros gera os proximos
   int primeiroTermo = 0;
   int segundoTermo = 1;
   int proximo = 0;
   int n;
   cin >> n;
   
    cout <<primeiroTermo<<endl<<segundoTermo<<endl;
    for ( ; ; ){
    proximo = primeiroTermo + segundoTermo;

    primeiroTermo = segundoTermo;
    segundoTermo = proximo; 

    cout <<  proximo <<endl;
    if (proximo >= n) {//condição de parada
       break;
    }
    
    }
     
}