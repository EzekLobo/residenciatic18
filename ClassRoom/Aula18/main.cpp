#include <iostream>
#include <vector>

using namespace std;

class Ponto
{
private:
    float a, y;

public:
    void setA(float a)
    {
        this->a = a;
    }

    void setB(float y)
    {
        this->y = y;
    }

    float getA() const
    {
        return a;
    }

    float getB() const
    {
        return y;
    }               
};

class Poligono
{
private:
    vector<Ponto> pontos;

public:
    void set(float a, float y)
    {
        Ponto p;
        p.setA(a);
        p.setB(y);
        pontos.push_back(p);
    }

    vector<Ponto> getListaDePontos() const
    {
        return pontos;
    }
};

int main()
{
    Poligono poli;

    cout << "Criando um Poligono!" << endl;
    char sn;
    float a, y;
    
    do
    {
        cout << "Digite as coordenadas:" << endl;
        cin >> a >> y;
        poli.set(a, y);
        cout << "Deseja inserir mais pontos (s/n)?";
        cin >> sn;

    } while (sn != 'n');

    vector<Ponto> listaDePontos = poli.getListaDePontos();

    cout << "Lista de Pontos:" << endl;
    for (const Ponto &ponto : listaDePontos)
    {
        cout << "Ponto (" << ponto.getA() << ", " << ponto.getB() << ")" << endl;
    }

    return 0;
}
