#include <iostream>
using namespace std;
int countDivisors(int n);

int main() {
    
    int divisors;

    for(int i = 2; i <= 100; i++){
        
        divisors = countDivisors(i);
        
        if (divisors ==2){
            cout << i << endl;
        }
    }

    return 0;
}

int countDivisors(int n) {
    int count = 1; // Inicializamos o contador com 1, pois todo número é divisível por 1

    // Começamos a fatoração por 2 e contamos quantos 2s são divisores de n
    while (n % 2 == 0) {
        n /= 2;
        count++;
    }

    // Agora, continuamos a fatoração por números ímpares a partir de 3
    for (int i = 3; i * i <= n; i += 2) {
        int exponent = 0;

        while (n % i == 0) {
            n /= i;
            exponent++;
        }

        if (exponent > 0) {
            count *= (exponent + 1);
        }
    }

    // Se n for maior que 1 no final, significa que ele é um primo maior que a raiz quadrada de n
    if (n > 1) {
        count *= 2;
    }

    return count;
}
