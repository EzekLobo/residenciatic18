#include <iostream>
#include <string>

using namespace std;

class Mamifero {
private:
    string nome;
    string especie;
    int idade;
    string habitat;
    bool carnivoro;

public:
    Mamifero() {
        nome = "";
        especie = "";
        idade = 0;
        habitat = "";
        carnivoro = false;
    }

    // Métodos getters
    string getNome() const { return nome; }
    string getEspecie() const { return especie; }
    int getIdade() const { return idade; }
    string getHabitat() const { return habitat; }
    bool isCarnivoro() const { return carnivoro; }

    // Métodos setters
    void setNome(string novoNome) { nome = novoNome; }
    void setEspecie(string novaEspecie) { especie = novaEspecie; }
    void setIdade(int novaIdade) { idade = novaIdade; }
    void setHabitat(string novoHabitat) { habitat = novoHabitat; }
    void setCarnivoro(bool novoCarnivoro) { carnivoro = novoCarnivoro; }

    // Função para listar os atributos do mamífero
    void listar() {
        cout << "Nome: " << nome << endl;
        cout << "Espécie: " << especie << endl;
        cout << "Idade: " << idade << " anos" << endl;
        cout << "Habitat: " << habitat << endl;
        cout << "É Carnívoro: " << (carnivoro ? "Sim" : "Não") << endl;
    }
};

int main() {
    Mamifero leao;
    leao.setNome("Leão");
    leao.setEspecie("Panthera leo");
    leao.setIdade(5);
    leao.setHabitat("Savana");
    leao.setCarnivoro(true);
    leao.listar();
    return 0;
}