#include <iostream>
#include <string>
using namespace std;

// verificar se  8 = 8 investido então posso concluir que para numero com 1 digito é um palindromo
//121 = 121
// 424 = 424
int modulo(int a);
string palindromo(int numero);

int main(){
    /**como verifico quantos digitos tem um numero em c++?
    posso usar um if para comprar se o numero é menor que 10 já que nesse caso todos serão palindromo;
    Mais o conjunto é dos inteiros então é valido para numeros negativos tambem
    Então o if talvez não seja uma solução eficiente.
    Talvez converter o numero no seu modulo possa ajudar.*/
    int numero;
    string menssagem;

    std::cin >> numero;    
   
   
    menssagem = palindromo(modulo(numero)); //modulo do numero no parametro para preservar o o valor negativo na variavel num e não recisar criar outra variavel anterior
    cout <<numero << " " << menssagem << endl;

    return 0;
}
string palindromo(int numero){
    if (numero < 10){
        return "É Palindromo";
    }else{
        string palindromo = to_string(numero);
        int tamanho = palindromo.length();
        
        for (int i = 0; i < tamanho / 2; i++){
            if (palindromo[i] != palindromo[tamanho - i - 1]){
                return "Não é palindromo";
            }
        }
        
        return "É Palindromo";
    }
}
int modulo(int a){

    if (a < 0){
        a = -(a); 
        return  a;
    }

    return a;
}