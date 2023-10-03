#include <iostream>

using namespace std;

class validador{

public:
   
   static bool validadorSenha(string senha){
        if(senha.empty()){
            return false;
        }else{
            if(senha.size()< 8){
                return false;
            }else{
                return true;
            }   
        }
   }
};

int main (){

    if(validador::validadorSenha("daniel20")){
        cout << "Senha valida" << endl;
    }else{
        cout << "Senha invalida" << endl;
    }
    return 0;
}

