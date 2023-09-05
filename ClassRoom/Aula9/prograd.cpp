#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    const int numAlunos = 1; // Defina o número de alunos desejado
    vector<vector<double>> alunos; // Matriz para armazenar os dados dos alunos

    // Preencha a matriz com os dados dos alunos (número de matrícula e 3 notas)
    for (int i = 0; i < numAlunos; i++) {
        vector<double> dadosAluno;
        int matricula;
        double nota1, nota2, nota3;

        cout << "Digite o número de matrícula do aluno " << i + 1 << ": ";
        cin >> matricula;

        cout << "Digite as três notas do aluno " << i + 1 << ": ";
        cin >> nota1 >> nota2 >> nota3;

        dadosAluno.push_back(matricula);
        dadosAluno.push_back(nota1);
        dadosAluno.push_back(nota2);
        dadosAluno.push_back(nota3);

        alunos.push_back(dadosAluno);
    }

    // Calcular a média das notas para cada aluno e exibir os dados
    for (int i = 0; i < numAlunos; i++) {
        int matricula = alunos[i][0];
        double nota1 = alunos[i][1];
        double nota2 = alunos[i][2];
        double nota3 = alunos[i][3];

        double media = (nota1 + nota2 + nota3) / 3.0;

         cout << "MATRICULA\tNOTA1\tNOTA2\tNOTA3\tMEDIA\n" << "===========================================\n";
         cout <<"\t" <<matricula <<  "\t" << nota1 << "\t" << nota2 << "\t" << nota3  << setprecision(2) << "\t" << media<<endl;
       
    }

    return 0;
}
