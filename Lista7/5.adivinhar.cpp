#include <iostream>
#include <random>

using namespace std;

int main ()
{
    
    srand(time(0));
    int valor = rand() % 100 + 1; //gera valores entre 0 e 1;
    int n;

    while (true){ //sempre verdade

        cin >> n;
        
        if(n < valor ){

            cout << "Baixo" << endl;

        }else if(n > valor){

            cout << "Alto" << endl;

        }else{//condição de saída do laço, o usuario digitar o número correto.

            cout << "Correto" << endl; 

            break;
        }
    }
}