#include <iostream> 
using namespace std;

int soma (int x, int y);
int divisao(int x, int y);

int main (){
    int x = 2, y = 3;
    
    x = soma(x,y);
    y = divisao(x,y);

    cout << "soma: " << x << endl << "divisao: " << y <<endl;
    return 0;
}

int soma(int x, int y){
    
    int result = x + y;

    return result;
}

int divisao(int a,int b){
  
   int result = a/b;

   return result;
}