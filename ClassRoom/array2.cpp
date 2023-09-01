#include<iostream>

using namespace std;

int main (){
    
    char word[] = {'H', 'e' , 'l', 'l' , 'o'};
    char name [30];

    cout << "Enter your name:";
    cin.getline(name, 30);
    cout << word << ',' << name;
    //bug na saída   
}