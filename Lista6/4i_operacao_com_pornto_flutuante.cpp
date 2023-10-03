#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y, raio;
    int quadrante;

   cin >> raio; // Defina o raio do círculo

    cout << "Digite as coordenadas (x, y) do ponto: ";
    cin >> x >> y;

    quadrante = (x > 0 && y > 0) ? 1 : 
                (x < 0 && y > 0) ? 2 : 
                (x < 0 && y < 0) ? 3 : 
                (x > 0 && y < 0) ? 4 : 0;

    if (quadrante != 0) {
        double distancia = sqrt(x * x + y * y);
        if (distancia <= raio) {
            cout << "O ponto está no Quadrante " << quadrante << " e dentro do círculo." << endl;
        } else {
            cout << "O ponto está no Quadrante " << quadrante << " mas fora do círculo." << endl;
        }
    } else {
        cout << "O ponto não está em nenhum dos quadrantes ou está na origem." << endl;
    }

    return 0;
}
