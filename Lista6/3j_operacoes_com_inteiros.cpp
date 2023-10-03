#include <iostream>


using namespace std;

int main(){
  int a, b;
  int maior;
  cin >> a >>b;

 maior = a > b ?  a : b;
 (maior % 2 == 0) ? cout <<"Par" <<endl : cout << "impar" <<endl;

}
//fim