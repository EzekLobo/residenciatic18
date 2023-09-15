#include <iostream>
#include <iomanip> // Para usar a formatação hexadecimal

using namespace std;

int main()
{
    char c;
    cin >> c;
    
    cout << "'" << c << "'" << "-"  << dec << int(c) << "-" << hex << int(c) <<endl;
        
    return 0;
}
