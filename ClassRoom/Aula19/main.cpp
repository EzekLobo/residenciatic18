#include <iostream>
using namespace std;

class meuInt
{
private:
    int x;

public:
    meuInt() {}

    meuInt(int _x) : x(_x) {}

    meuInt operator+(meuInt p)
    {
        meuInt p1;
        p1.setX(p.getX() + x + 1);
        return p1;
    }

    int getX() const
    {
        return x;
    }

    void setX(int _x)
    {
        x = _x;
    }
};

int main()
{
    int j, k;
    cout<<"Digite dois numeros:";
    cin >> j >> k;

    meuInt a(j);
    meuInt b(k);

    meuInt result = a + b;

    cout << "Resultado:" << result.getX() << endl;

    return 0;
}
