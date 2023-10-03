#include <iostream>

using namespace std;

int main(){
   char ch1,ch2, ch3;
   cin >> ch1 >> ch2;
   ch3 = char(int(ch1)-1);

   if(int(ch3) <= 256 && int(ch3)>0){
     cout << "'" << ch3 << "'"  << dec << int(ch3) << "-"<< oct <<int(ch3) << "-" << hex << int(ch3) <<endl;
    
   }else{
    cout <<"_" <<endl;
    }
}

//3d_operacoes_com_caracters.cpp