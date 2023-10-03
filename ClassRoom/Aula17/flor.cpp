#include <iostream>
#include <string>

using namespace std;

class Flor {
private:
    string nome;
    string cor;
    double altura;
    string tipo; // Tipo ou variedade da flor
    string especie; // Novo atributo para representar a espécie da flor

public:
    Flor() {
        nome = "";
        cor = "";
        altura = 0.0;
        tipo = "";
        especie = "";
    }

    Flor(string _nome, string _cor, double _altura, string _tipo, string _especie) :
        nome(_nome), cor(_cor), altura(_altura), tipo(_tipo), especie(_especie) {}

    // Métodos getters
    string getNome() const { return nome; }
    string getCor() const { return cor; }
    double getAltura() const { return altura; }
    string getTipo() const { return tipo; }
    string getEspecie() const { return especie; } // Getter para o novo atributo "especie"

    // Métodos setters
    void setNome(string novoNome) { nome = novoNome; }
    void setCor(string novaCor) { cor = novaCor; }
    void setAltura(double novaAltura) { altura = novaAltura; }
    void setTipo(string novoTipo) { tipo = novoTipo; }
    void setEspecie(string novaEspecie) { especie = novaEspecie; } // Setter para o novo atributo "especie"

    // Função para mostrar informações da flor
    void mostrarInfo() const {
        cout << "Nome: " << nome << endl;
        cout << "Cor: " << cor << endl;
        cout << "Altura: " << altura << " cm" << endl;
        cout << "Tipo: " << tipo << endl;
        cout << "Espécie: " << especie << endl; // Mostrar a espécie da flor
    }
};

int main() {
    Flor rosa("Rosa", "Vermelha", 30.5, "Rosaceae", "Rosa gallica");
    Flor margarida("Margarida", "Branca", 20.0, "Asteraceae", "Leucanthemum vulgare");

    // Mostrar informações das flores
    cout << "Informações da Rosa:" << endl;
    rosa.mostrarInfo();

    cout << "\nInformações da Margarida:" << endl;
    margarida.mostrarInfo();

    return 0;
}
