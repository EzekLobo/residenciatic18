
#include <iostream>

#include <string>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]){

    char *meuprog = argv[1];
    char *nome = argv[2];
    int ano  = atoi(argv[3]);


    cout << "Nome do programa:" << meuprog  << endl;
    cout << "Nome do fulano: " << nome << endl;
    cout << "idade: " << (2023 - ano) << endl;
   
    cout << "Quantidade de argumentos: " <<argc<< endl;
  
  return 0;
}