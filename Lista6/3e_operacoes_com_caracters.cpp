#include <iostream>


using namespace std;

int main(){
   char ch1,ch2, ch3;
   cin >> ch1 >> ch2;
   ch3 = char(int(ch2)+1);
  
   
   ch3 = (int(ch2)>93 && int(ch2)<123)? 'A' : ' ';
   cout << ch3 <<endl;
}

//3f_operacoes_com_caracters.cpp