#include <iostream>

using namespace std;

int main() {
    double x, y, z;

    // Solicitar ao usuário as coordenadas (x, y)
    std::cout << "Digite as coordenadas (x, y): ";
    std::cin >> x >> y;

    // Calcular o valor de f(x) para o valor de x fornecido
    double fx = 5 * x + 2;

    // Comparar o valor de y com f(x)
    if (y > fx) {
        std::cout << "(" << x << ", " << y << ") está acima da curva." << std::endl;
    } else if (y < fx) {
        std::cout << "(" << x << ", " << y << ") está abaixo da curva." << std::endl;
    } else {
        std::cout << "(" << x << ", " << y << ") está na curva." << std::endl;
    }

    return 0;
}
