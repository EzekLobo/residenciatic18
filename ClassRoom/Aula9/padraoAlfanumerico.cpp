#include <iostream>

using namespace std;

int main ()
{
    int peso;
    cin >> peso;
    int repetir =1;
    char letra = 'A';
    int dec = int(letra);
   
    while( repetir <=  peso){
    
        for (int i = 1; i <= repetir; i++){
           
             cout << char(dec);
             dec++;
        }
        cout << endl;
        repetir++;
    }
}