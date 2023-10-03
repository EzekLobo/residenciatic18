#include <iostream>

using namespace std;
class Utilitarios
{

public:
    static double ConverterParaCelsius(double fahrenheit){
        return ((fahrenheit -  32.0) *5.0/9.0);
    }

};

int main(){
    double tempFahrenheit = 32.0;
    double tempCelsius = Utilitarios::ConverterParaCelsius(tempCelsius);

    cout << tempCelsius;
    return 0;
}
