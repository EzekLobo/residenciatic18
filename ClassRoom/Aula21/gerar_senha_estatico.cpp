#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class senhas {
public:
    static string GeradoDeSenhaEstatico() {
        srand(static_cast<unsigned int>(time(nullptr))); // Inicializa o gerador de números aleatórios com o tempo atual
        const string caracteresPermitidos = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
        const int tamanhoSenha = 8;
        string senha;

        for (int i = 0; i < tamanhoSenha; i++) {
            int indice = rand() % caracteresPermitidos.size(); // Escolhe um caractere aleatório
            senha += caracteresPermitidos[indice];
        }

        return senha;
    }
};

int main() {
    string senha = senhas::GeradoDeSenhaEstatico();
    cout << "Senha gerada: " << senha << endl;

    return 0;
}
