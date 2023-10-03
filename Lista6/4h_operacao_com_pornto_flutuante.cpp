#include <iostream>

#include <cmath>
using namespace std;

int main(){
 
    double r;//raio
    double d; //diametro
    double c;//circunferência;
    double area;

    cin >> r;

    d = 2*r;//diametro de um circulo é o raio 2 vezes o raio é um aste de um circulo até seu meio;
    c = 2* M_PI * r; //ou c = pi *d, d = 2 * r ou c = 2pi*r;
    area = M_PI * r*r; // ou r*r= d;
    
    cout << d << endl;
    cout << c<< endl;
    cout << area<< endl;;

}
//4i_operacao_com_pornto_flutuante.cpp