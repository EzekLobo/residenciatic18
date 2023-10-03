#include <iostream>
#include <sstream>
#include <string>
#include <locale>

using namespace std;

class Data {
    private:

    int dia, mes, ano;
    
    public:

    void setData(const string& dataStr) {
        char buffer[20]; // Usamos um buffer para a conversão
        istringstream ss(dataStr);
       ss >> buffer;
        //se não está no formato valido 
        if (std::sscanf(buffer, "%d/%d/%d", &dia, &mes, &ano) != 3 || mes < 1 || mes > 12) {
            std::cout << "Formato inválido!" << std::endl;
            dia = mes = ano = 0; // Define a data como inválida
        }

    }

    string getData() {
        string data;
        data = to_string(dia) +'/'+ to_string(mes) + '/' + to_string(ano);
        return data;
    }

    void imprimirData(){

         if (dia == 0 || mes == 0 || ano == 0) {
            std::cout << "Data inválida!" << std::endl;
        } else {
            stringstream ss;
            ss.imbue(std::locale(""));
            ss << mes << '/' << dia << '/' << ano;
            string dataStr = ss.str(); 
            cout << "Data: " << dataStr << std::endl;
        }
    }
};

int main() {
    Data data;
    string input;
    cout << "Digite uma data no formato dd/mm/aaaa: ";
    cin >> input;
    
    data.setData(input);//validar data;
    data.imprimirData();
    return 0;
}