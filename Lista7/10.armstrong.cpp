#include <iostream>
#include <string>//converter um inteiro em string para pegar a quantidade de digitos
#include <cmath>// Usar a função pow

using namespace std;

int main() {
    int numero;
    int soma_digitos = 0;
    
    cin >>numero;
    
    string digitos = to_string(numero);//intero para string
    int expoente = digitos.length();//quantidade de digitos;

    /*
    //Abordagem matematica para quantidades grande;
    inte expoente = 0;
    while (numero != 0) {
        numero/= 10;
        expoente++;
    }
    */
    
    for (int i = 0; i < expoente; i++) {
        soma_digitos += pow(stoi(digitos.substr(i, 1)), expoente); //maxica acontecendo
    }

    if (soma_digitos == numero) {
        cout << "É um número de Armstrong"<< endl;
    } else {
        cout << "Não é um número de Armstrong"<< endl;
    }

    return 0;
}
