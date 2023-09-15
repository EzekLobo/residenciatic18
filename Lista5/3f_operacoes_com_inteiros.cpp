#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b;

    c = std::abs(a - b);

    cout << "O módulo da diferença entre a e b é: " << c << "\n";

    return 0;
}
