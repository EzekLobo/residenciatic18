#include <iostream>

using namespace std;

class Contador {
private:
    static int contadorDeInstancias;

public:

    Contador() {
        contadorDeInstancias++;
    }

    // Método estático para obter o número total de instâncias
    static int getTotalDeInstancias() {
        return contadorDeInstancias;
    }

    static void setContador(int x) {
        contadorDeInstancias = x;
    }
};

// Inicialize a variável estática
int Contador::contadorDeInstancias = 0;

int main() {
    // Contador::setContador(1); // Inicializa com outro outro valor
    // Cria algumas instâncias da classe Contador
    Contador obj1;
    Contador obj2;
    Contador obj3;

    // Obtenha o número total de instâncias usando o método estático
    int total = Contador::getTotalDeInstancias();

    cout << "Total de instâncias da classe Contador: " << total << endl;

    return 0;
}
