#include <iostream>
#include <climits>

using namespace std;
int main() {
    int numero;
    
    // Solicitar ao usuário um número inteiro
    std::cout << "Digite um número inteiro: ";
    std::cin >> numero;
    std::cout << "Tamanho de um short int em bytes: " << sizeof(short int) << std::endl;
    std::cout << "Valor máximo de um short int: " << SHRT_MAX << std::endl;
    std::cout << "Valor mínimo de um short int: " << SHRT_MIN << std::endl;

    // Determinar se o número pode ser representado como short int
    std::cout << "O número fornecido: " << (numero > SHRT_MAX ? " é maior que um short int." : "este valor pertence ao intervalo dos short int.") << std::endl;

    return 0;
}
