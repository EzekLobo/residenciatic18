#include <iostream>
#include <cmath>

using namespace std; // Usar o namespace std

int main() {
    double a, b, c;
    double discriminante;

    // Solicitar ao usuário os coeficientes a, b e c
    cout << "Digite o coeficiente a: ";
    cin >> a;
    cout << "Digite o coeficiente b: ";
    cin >> b;
    cout << "Digite o coeficiente c: ";
    cin >> c;

    // Calcular o discriminante
    discriminante = b * b - 4 * a * c;

    // i. Determinar o número de raízes reais
    if (discriminante > 0) {
        cout << "O polinômio tem duas raízes reais." << endl;
    } else if (discriminante == 0) {
        cout << "O polinômio tem uma raiz real (raiz dupla)." << endl;
    } else {
        cout << "O polinômio não possui raízes reais." << endl;
    }

    // ii. Imprimir as raízes reais, se existirem
    if (discriminante >= 0) {
        double raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        double raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "Raiz 1: " << raiz1 << endl;
        cout << "Raiz 2: " << raiz2 << endl;
    }

    // iii. Ler o valor de x e calcular p(x)
    double x;
    cout << "Digite o valor de x: ";
    cin >> x;
    double px = a * x * x + b * x + c;
    cout << "p(x) = " << px << endl;

    return 0;
}
