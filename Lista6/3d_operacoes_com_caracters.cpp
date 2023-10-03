#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
   char ch1,ch2, ch3;
   cin >> ch1 >> ch2;
   ch3 = char(int(ch2)+1);

    if(int(ch3) <256 && int(ch3)>0){
        printf("%c-%d-%o-%x \n", ch3, int(ch3), int(ch3), int(ch3));
    }else{
       printf("_\n");
    }
}

//3e_operacoes_com_caracters.cpp