
/*
    Dizemos que um numero é divisor do outro quando temos uma divisão exatas.
*/
#include <iostream>

using namespace std;

int main ()
{
    int n;
    
    cin >> n;
    //para todo número menor que n ache o divisor para n onde n%i = 0
    cout << 0 << " = " << 0 <<endl;
    for(int i = 1; i <= n; i++){
       
        if( n % i == 0){
            cout << i << " = " << n/i << endl;
        }
    }
}