#include <iostream>

using namespace std;

int main() {
    int a, b;
    std::cin >> a >> b;

    if (b == 0) {
        std::cout << "Divisão por zero não é possível. Por favor, insira um valor válido para b.\n";
    } else {
        int c = a / b;
        std::cout << "O quociente entre a e b é: " << c << "\n";
    }

    return 0;
}
