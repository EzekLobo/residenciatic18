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
            
            if(dec == 90){
                dec = dec +7;
            }

            if (dec == 122){
                dec = 48;
            }
            if (dec == 58){
                dec = 65;
            }
            
        }
        cout << endl;
        repetir++;
        
    }
}