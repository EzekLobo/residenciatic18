#include <iostream>
#include <iomanip> // Inclusão da biblioteca iomanip para configurar a notação científica

using namespace std;

int main() {
    double x, y, z;

    // Solicitar ao usuário os valores de x e y
    std::cout << "Digite o valor de x e y: ";
    std::cin >> x;
    std::cin >> y;

    // Calculando o produto entre x e y
    z = x * y;

    // Imprimindo o resultado em base 10.
    std::cout << "O produto de x e y em notação científica é: " << scientific << z << std::endl;

    return 0;
}
