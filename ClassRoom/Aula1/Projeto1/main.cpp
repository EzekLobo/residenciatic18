#include <iostream>
#include <string>

using namespace std;

int main (void){

    string nome;
     int anoNascimento;

    cout << "Digite o seu nome: ";
    cin >> nome;
    cout << endl;
    
    cout << "Bom dia," << nome << ". Tenha um bom curso."<< endl;

    cout << nome <<", voce nasceu em que ano? ";
    cin >> anoNascimento;
    cout << "Considerando que estamos em 2023, ou voce tem " << 2023- anoNascimento << " anos, ou está proximo de fazer." << endl;

    return 0;
}