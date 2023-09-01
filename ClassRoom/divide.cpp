//parametros \int \double

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]){

    string parametro = argv[1];
    
    if( argc ==1 ){
        cout << "Algumentos invalidos";
    }

    if(argc >2){
        if (parametro.compare("\int") == 0){
             int a = atoi(argv[2]);    
             int b  = atoi(argv[3]);
             cout << "imprimindo elemento:" << a/b << endl;
        }  else if(parametro.compare("\double") == 0){
            double a = atof(argv[2]);
            double b = atof(argv[3]);
            cout << "imprimindo elemento: " << a/b << endl;
        }else {
            cout << "Não está listado";
        }
    }
  
  
  return 0;
}