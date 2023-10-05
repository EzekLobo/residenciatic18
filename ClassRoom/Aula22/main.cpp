#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class BancoDeDados {
public:
    static vector<string> recuperarDados(string url) {
        // Abrindo arquivo para leitura
        ifstream arquivo_entrada("/home/daniel/Documentos/TIC18/ClassRoom/Aula22/exemplo.txt");
        vector<string> linhas;
        
        if (arquivo_entrada.is_open()) {
            string linha;
            while (getline(arquivo_entrada, linha)) {
                linhas.push_back(linha);
            }
            arquivo_entrada.close(); // Close the input file here
        } else {
            cout << "Erro ao abrir o arquivo" << endl;
        }
        return linhas;
    }

    static void salvarDados(vector<string>& dados, string url){
            // Abrindo o arquivo para escrita
        ofstream arquivo_saida;
        arquivo_saida.open(url, ios_base::out);

        // Verifica se o arquivo foi aberto com sucesso
        if (arquivo_saida.is_open()) {
            for (const string& linha : dados) {
                arquivo_saida << linha << endl;
            }
            arquivo_saida.close();
        } else {
            cout << "Erro ao abrir o arquivo" << endl;
        }
    }
};

int main() {

    return 0;
}
