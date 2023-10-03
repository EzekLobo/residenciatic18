#include <iostream>
#include <cctype>

using namespace std;

class validador {
public:
    static bool validadorSenha(string senha) {
        if (senha.empty()) {
            return false;
        } else if (senha.size() < 8) {
            return false;
        } else {
            bool temLetraMaiuscula = false;
            bool temNumero = false;

            for (char c : senha) {
                if (isupper(c)) {
                    temLetraMaiuscula = true;
                } else if (isdigit(c)) {
                    temNumero = true;
                }
            }

            return temLetraMaiuscula && temNumero;
        }
    }
};

int main() {
    if (validador::validadorSenha("Daniel20")) {
        cout << "Senha válida" << endl;
    } else {
        cout << "Senha inválida" << endl;
    }

    if (validador::validadorSenha("sanieldD")) {
        cout << "Senha válida" << endl;
    } else {
        cout << "Senha inválida" << endl;
    }
    return 0;
}
