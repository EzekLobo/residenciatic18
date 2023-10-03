#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    
    cin >> a >> b;

   
    c = 4 * a + b/3-5;//ordem de precedencia natural
    cout << c <<endl;
    c = 4 * (a + b)/(3-5);//Ordem de procesencia os elementos dentro parenteses são priorizados.
    cout << c <<endl;

    c = ((4*(a + b))/3)-5;
    cout << c <<endl;
  
}

//2g.operacao_com_inteiro.cpp