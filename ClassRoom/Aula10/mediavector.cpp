
#include <iostream>
#include <vector>
#include <iomanip>

int main() {
    std::vector<int> numeros;
    char continuar;

    do {
        int numero;
        std::cout << "Digite um número inteiro: ";
        std::cin >> numero;
        numeros.push_back(numero);

        std::cout << "Deseja continuar? (S/N): ";
        std::cin >> continuar;
    } while (continuar == 'S' || continuar == 's');

    int soma = 0;
    for (auto it = numeros.begin(); it != numeros.end(); ++it) {
        soma += *it;
    }

    double media = static_cast<double>(soma) / numeros.size();

    std::cout << "Soma dos valores: " << soma << std::endl;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Média dos valores: " << media << std::endl;

    return 0;

}
