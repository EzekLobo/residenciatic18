#include <iostream>
#include <vector>
#include <iomanip>
#include <ctime>    // For seeding random number generator
#include <cstdlib>  // For random number generation



using namespace std;

struct Aluno
{
    string matricula;
    double notas[4] = {0,0,0,0};//duas avaliaticas e 2 pratica;
    double media;

   void calcularMediaPonderada(Aluno &aluno)
    {
        double pesoExames = 2.0;   // Weight for exams
        double pesoPraticas = 1.0; // Weight for practicals

        double somaExames = aluno.notas[0] + aluno.notas[1];
        double somaPraticas = aluno.notas[2] + aluno.notas[3];

        double mediaPonderada = (pesoExames * somaExames + pesoPraticas * somaPraticas) /
                                (pesoExames * 2 + pesoPraticas * 2);
        
    }
};

struct Turma{
    vector<Aluno>alunos;
    double media_da_turma;

    void media_da_turma(Turma turma){
            // Calculate the class average
        double class_sum = 0;
        for (const Aluno &aluno : turma.alunos)
        {
            class_sum += aluno.media;
        }
        
        turma.media_da_turma = class_sum / turma.alunos.size();
    }
};

double randomDouble(double min, double max)
{
    return min + static_cast<double>(rand()) / (static_cast<double>(RAND_MAX / (max - min)));
}
void gerarAluno (Turma turma){
    srand(static_cast<unsigned int>(time(nullptr))); // Seed the random number generator

    int num_alunos = 10;


    for (int i = 0; i < num_alunos; ++i)
    {
        Aluno aluno;
        aluno.matricula = "Matricula" + to_string(i + 1); // Generate a matricula

        for (int j = 0; j < 4; ++j)
        {
            aluno.notas[j] = randomDouble(0.0, 10.0); // Generate random grades between 0 and 10
        }

        // Calculate the average for this student
        double sum = 0;
        for (int j = 0; j < 4; ++j)
        {
            sum += aluno.notas[j];
        }
        aluno.media = sum / 4.0;

        // Add the student to the turma
        turma.alunos.push_back(aluno);
    }

}
int main(){
    Turma informatica;

    gerarAluno(informatica);
    return 0;
}