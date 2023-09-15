#include <iostream>
#include <cmath>

// Usar o namespace std para evitar a necessidade de prefixar std::
using namespace std;

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

    if (discriminante > 0) {
        // Duas raízes reais distintas
        double raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        double raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "O polinômio tem duas raízes reais: " << raiz1 << " e " << raiz2 << endl;
    } else if (discriminante == 0) {
        // Uma raiz real (raiz dupla)
        double raiz = -b / (2 * a);
        cout << "O polinômio tem uma raiz real (raiz dupla): " << raiz << endl;
    } else {
        // Nenhuma raiz real
        cout << "O polinômio não possui raízes reais." << endl;
    }

    return 0;
}
