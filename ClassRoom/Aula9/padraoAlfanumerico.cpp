#include <iostream>

using namespace std;

int main ()
{
    int peso;
    cin >> peso;
    int n =1;
    char letra = 'A';
    int dec = int(letra);
   
    while( n <=  peso){
    
        for (int i = 1; i <= n; i++){
           
             cout << char(dec);
             dec++;
        }
        cout << endl;
        n++;
    }
}