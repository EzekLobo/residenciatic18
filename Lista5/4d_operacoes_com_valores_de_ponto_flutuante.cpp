#include <iostream>
#include <cmath> // Inclua a biblioteca cmath para usar sqrt()

using namespace std;

int main() {
    double x, y, z;

    // Solicitar ao usuário as coordenadas (x, y)
    std::cout << "Digite as coordenadas (x, y): ";
    std::cin >> x >> y;

    // Calcular a distância euclidiana
    z = sqrt(x * x + y * y);

    std::cout << "A distância euclidiana entre (" << x << ", " << y << ") e o centro de coordenadas é: " << z << std::endl;

    return 0;
}
