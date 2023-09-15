#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    
    cin >> a >> b;

    int result = a - b;
    

    if (result < 0) {//se for um valor negativo
        c = -result;//-(-resulta)=  -*- = +
    } else {
        c = result;
    }

    cout << "O módulo da diferença entre a e b é: " << c << endl;

    return 0;
}
