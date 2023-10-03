#include <iostream>
#include <string>

using namespace std;

class livro {
private:
    string titulo;
    string autor;
    int ISBS; // O número de identificação único do livro, geralmente usado para fins de catalogação.
    string editora;
    string capa; // Pode ser o link de onde essa capa está.
    string idioma;
    double avaliacao;

public:
    livro() {
        titulo = "";
        autor = "";
        ISBS = 0;
        editora = "";
        capa = ""; // Link
        idioma = "";
        avaliacao = 5.0;
    }

    // Métodos getters
    string getTitulo() const { return titulo; }
    string getAutor() const { return autor; }
    int getISBS() const { return ISBS; }
    string getEditora() const { return editora; }
    string getCapa() const { return capa; }
    string getIdioma() const { return idioma; }
    double getAvaliacao() const { return avaliacao; }

    // Métodos setters
    void setTitulo(string novoTitulo) { titulo = novoTitulo; }
    void setAutor(string novoAutor) { autor = novoAutor; }
    void setISBS(int novoISBS) { ISBS = novoISBS; }
    void setEditora(string novaEditora) { editora = novaEditora; }
    void setCapa(string novaCapa) { capa = novaCapa; }
    void setIdioma(string novoIdioma) { idioma = novoIdioma; }
    void setAvaliacao(double novaAvaliacao) { avaliacao = novaAvaliacao; }

    // Função para listar os atributos do livro
    void listar() {
        cout << "Título: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "ISBN: " << ISBS << endl;
        cout << "Editora: " << editora << endl;
        cout << "Capa: " << capa << endl;
        cout << "Idioma: " << idioma << endl;
        cout << "Avaliação: " << avaliacao << endl;
    }
};

int main() {
    livro livro1;
    // Usando os setters para atribuir valores aos atributos do livro1
    livro1.setTitulo("O Senhor dos Anéis");
    livro1.setAutor("J.R.R. Tolkien");
    livro1.setISBS(9780395193957);
    livro1.setEditora("Editora Martins");
    livro1.setCapa("caminho/para/a/imagem.jpg");
    livro1.setIdioma("Português");
    livro1.setAvaliacao(4.5);

    // Listar os atributos do livro1 usando getters
    cout << "Atributos do livro1:" << endl;
    cout << "Título: " << livro1.getTitulo() << endl;
    cout << "Autor: " << livro1.getAutor() << endl;
    cout << "ISBN: " << livro1.getISBS() << endl;
    cout << "Editora: " << livro1.getEditora() << endl;
    cout << "Capa: " << livro1.getCapa() << endl;
    cout << "Idioma: " << livro1.getIdioma() << endl;
    cout << "Avaliação: " << livro1.getAvaliacao() << endl;

    return 0;
}
