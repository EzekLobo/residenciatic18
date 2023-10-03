#include <iostream>
#include <string>

using namespace std;

class Ave {
private:
    string nome;
    string especie;
    int idade;
    string habitat;
    bool voa;

public:
    Ave() {
        nome = "";
        especie = "";
        idade = 0;
        habitat = "";
        voa = false;
    }

    // Métodos getters
    string getNome() const { return nome; }
    string getEspecie() const { return especie; }
    int getIdade() const { return idade; }
    string getHabitat() const { return habitat; }
    bool podeVoar() const { return voa; }

    // Métodos setters
    void setNome(string novoNome) { nome = novoNome; }
    void setEspecie(string novaEspecie) { especie = novaEspecie; }
    void setIdade(int novaIdade) { idade = novaIdade; }
    void setHabitat(string novoHabitat) { habitat = novoHabitat; }
    void setPodeVoar(bool podeVoar) { voa = podeVoar; }

    // Função para listar os atributos da ave
    void listar() {
        cout << "Nome: " << nome << endl;
        cout << "Espécie: " << especie << endl;
        cout << "Idade: " << idade << " anos" << endl;
        cout << "Habitat: " << habitat << endl;
        cout << "Pode Voar: " << (voa ? "Sim" : "Não") << endl;
    }
};

int main() {

    Ave aguia;
    aguia.setNome("Águia-dourada");
    aguia.setEspecie("Aquila chrysaetos");
    aguia.setIdade(8);
    aguia.setHabitat("Montanhas");
    aguia.setPodeVoar(true);
    
    cout << "\nAtributos da Águia-dourada:" << endl;
    aguia.listar();

    return 0;
}