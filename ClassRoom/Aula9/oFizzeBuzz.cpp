#include <iostream>

using namespace std;

int main (void)
{

    for(int i= 0; i <=100; i++){

        if ((i % 3) == 0){
            cout << i << " Fizz" << endl;
        }else if( i % 5 == 0){
            cout << i << " Buzz" << endl;
        }else{
             cout << i << " FizzBuzz" << endl;
        }
    }
    return 0;
}