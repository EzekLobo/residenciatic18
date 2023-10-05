#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

// Definição da estrutura Aluno
struct Aluno
{
private:
    string nome;
    string email;
    double nota1;
    double nota2;

public:
    void inserirNovoAluno(vector<Aluno> &alunos)
    {
        Aluno novoAluno;
        cin.ignore();
        cout << "Digite o nome: ";
        cin >> novoAluno.nome;

        cout << "Digite o e-mail: ";
        cin >> novoAluno.email;

        cout << "Digite Nota 1 e Nota2: ";
        cin >> novoAluno.nota1 >> novoAluno.nota2;
        alunos.push_back(novoAluno);
        
    }
    int buscarAluno(vector<Aluno> alunos, string nome)
    {
        int quantidade = alunos.size();

        for (int i = 0; i < quantidade; i++)
        {
            if (nome == alunos[i].nome)
            {
                return i;
            }
        }
        return -1;
    }
    void alteraAluno(vector<Aluno>& alunos)
    {
        string nome;
        string email;
        double nota1;
        double nota2;
        cin.ignore();
        cout << "Digite o nome do aluno:";
        getline(cin, nome);
        
        int posicao = buscarAluno(alunos, nome);

        if (posicao != -1)
        {

            cout << "Digite o email:";
            cin >> email;
            alunos[posicao].email = email;
            
            cout << "Digite a nova nota1:";
            cin >> nota1;
            alunos[posicao].nota1 = nota1;

            cout << "Digite a nota2:";
            cin >> nota2;
            alunos[posicao].nota2 = nota2;

            cout << "Notas do Aluno " << nome << " alteradas com sucesso." << endl;

        }
        else
        {
            cout << "Aluno " << nome << " não encontrado na alunos." << endl;
        }
    }
    void excluirAluno(vector<Aluno> alunos)
    {

        string nome;
        cout << "Digite o nome do aluno:";
        cin.ignore();
        getline(cin, nome);

        int posicao = buscarAluno(alunos, nome);

        if (posicao != -1)
        {
            alunos.erase(alunos.begin() + posicao); // Remove o Aluno da posição encontrada
            cout << "Aluno " << nome << " removido com sucesso." << endl;
        }
        else
        {
            cout << "Aluno " << nome << " não encontrado na alunos." << endl;
        }

    }
    void listarAlunos(vector<Aluno> alunos)
    {
        for (Aluno &aluno : alunos)
        {
            cout << "Nome: " << aluno.nome << endl;
            cout << "Email: " << aluno.email << endl;
            cout << "Nota1: " << aluno.nota1 << endl;
            cout << "Nota2: " << aluno.nota2 << endl;
            cout << endl;
        }
    }

    // Getter para o atributo nome
    string getNome()
    {
        return nome;
    }
    // Setter para o atributo nome
    void setNome(string _nome)
    {
        nome = _nome;
    }
    // Getter para o atributo email
    string getEmail()
    {
        return email;
    }
    // Setter para o atributo email
    void setEmail(string _email)
    {
        email = _email;
    }
    // Getter para o atributo nota1
    double getNota1()
    {
        return nota1;
    }
    // Setter para o atributo nota1
    void setNota1(double _nota1)
    {
        nota1 = _nota1;
    }
    // Getter para o atributo nota2
    double getNota2()
    {
        return nota2;
    }
    // Setter para o atributo nota2
    void setNota2(double _nota2)
    {
        nota2 = _nota2;
    }
};

class BancoDeDados
{
public:
    static vector<Aluno> recuperarDados(const string &url)
    {
        ifstream arquivo_entrada(url);
        vector<Aluno> alunos;

        if (arquivo_entrada.is_open())
        {
            string linha;
            while (getline(arquivo_entrada, linha))
            {
                Aluno aluno;
                string nome;
                string email;
                string nota1;
                string nota2;
                istringstream iss(linha);
                // Use ',' como delimitador para separar os valores
                getline(iss, nome, ',');
                aluno.setNome(nome);

                getline(iss, email, ',');
                aluno.setEmail(email);

                getline(iss, nota1, ',');
                aluno.setNota1(stod(nota1));

                getline(iss, nota2, ',');
                aluno.setNota2(stod(nota2));

                alunos.push_back(aluno);
            }
            arquivo_entrada.close();
        }
        else
        {
            cout << "Erro ao abrir o arquivo" << endl;
        }
        return alunos;
    }

    static void salvarDados(vector<Aluno> &dados, const string &url)
    {
        ofstream arquivo_saida(url);

        if (arquivo_saida.is_open())
        {
            for (Aluno &aluno : dados)
            {
                arquivo_saida << aluno.getNome() << ',' << aluno.getEmail() << ',' << aluno.getNota1() << ',' << aluno.getNota2() << endl;
            }
            arquivo_saida.close();
        }
        else
        {
            cout << "Erro ao abrir o arquivo" << endl;
        }
    }

    static void salvarDadosNoFinal(vector<Aluno> &dados, const string &url)
    {
        ofstream arquivo_saida(url, ios_base::app);

        if (arquivo_saida.is_open())
        {
            for (Aluno &aluno : dados)
            {
                arquivo_saida << aluno.getNome() << ',' << aluno.getEmail() << ',' << aluno.getNota1() << ',' << aluno.getNota2() << endl;
            }
            arquivo_saida.close();
        }
        else
        {
            cout << "Erro ao abrir o arquivo" << endl;
        }
    }
};

int main()
{
    const string urlArquivo = "/home/daniel/Documentos/TIC18/ClassRoom/Aula22/Gerenciar Turma/dadosDosAlunos.txt";

    vector<Aluno> alunos = BancoDeDados::recuperarDados(urlArquivo);

    int escolha;
    Aluno novoAluno;

    do
    {
        cout << "Menu:" << endl;
        cout << "1. Inserir novo aluno" << endl;
        cout << "2. Alterar aluno" << endl;
        cout << "3. Excluir aluno" << endl;
        cout << "4. Listar alunos" << endl;
        cout << "5. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> escolha;

        switch (escolha)
        {
        case 1:
            // Chame a função para inserir um novo aluno
                novoAluno.inserirNovoAluno(alunos);
                BancoDeDados::salvarDadosNoFinal(alunos, urlArquivo);
            break;
        case 2:
            // Chame a função para alterar um aluno
            novoAluno.alteraAluno(alunos);
            BancoDeDados::salvarDados(alunos, urlArquivo);
            break;
        case 3:
            // Chame a função para excluir um aluno
            novoAluno.excluirAluno(alunos);
            BancoDeDados::salvarDados(alunos, urlArquivo);
            break;
        case 4:
            // Chame a função para listar os alunos
            novoAluno.listarAlunos(alunos);
            break;
        case 5:
            cout << "Saindo do programa..." << endl;
            break;
        default:
            cout << "Opção inválida. Tente novamente." << endl;
        }

    } while (escolha != 5);

    return 0;
}
