#include <iostream>

using namespace std;

class MinhaClasse{
    public:
   
    static int contador; 

    //Método estático
    static void MetodoEstatico(){
        cout << "Este é um método estático!" << endl;
    }

    void MetodoNaoEstatico(){
        cout <<"Este é um método não estático!" <<endl;
    }

};

int main (){
    //Chamando o método estático sem uma instância da classe
    MinhaClasse::MetodoEstatico();

    //crinado instâncias da classe
    MinhaClasse obj1;
    obj1.MetodoNaoEstatico();
    
}