#include <iostream>
using namespace std;

class Calculadora{
    public:
    
    static double adicao(int x, int y)
    {
        return x + y;
    }

    static double subtracao(int x, int y)
    {
        return x - y;
    }

    static double multiplicacao(int x, int y)
    {
        return x * y;
    }

    static double divisao(int x, int y)
    {
        if (y != 0)
            return static_cast<double>(x) / y;
        else
        {
            cerr << "Erro: Divisão por zero!" << endl;
            return 0.0; // Tratamento de erro, retorne 0.0 neste caso
        }
    }
};

int main()
{
    double num1, num2;
    double resultado;
    char operacao;

    cout << "Digite dois números: ";
    cin >> num1 >> num2;

    cout << "Escolha uma operação (+, -, *, /): ";
    cin >> operacao;

    switch (operacao)
    {
    case '+':
        resultado = Calculadora::adicao(num1, num2);
        break;

    case '-':
        resultado = Calculadora::subtracao(num1, num2);
        break;

    case '*':
        resultado = Calculadora::multiplicacao(num1, num2);
        break;

    case '/':
        resultado = Calculadora::divisao(num1, num2);
        break;

    default:
        cout << "Operação inválida." << endl;
        return 1; // Saia do programa com código de erro
    }

    cout << "Resultado: " << resultado << endl;
    return 0;
}
