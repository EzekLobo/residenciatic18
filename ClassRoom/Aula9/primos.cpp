
#include <iostream>

using namespace std;

int main() {
    for (int i = 2; i <= 100; i++) {
        bool primo = true;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                primo = false;
                break;
            }
        }

        if (primo) {
            cout << "Prime: " << i << endl;
        }
    }

    return 0;
}
