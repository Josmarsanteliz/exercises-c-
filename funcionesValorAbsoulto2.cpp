
#include <iostream>
//Funciones template
//Valor absoluto de un numero

using namespace std;



template <class TIPOD>
void numero (TIPOD num);

int main() {
    int n1 = 3;
    double n2 = -3404.4444445;
    int n3 = -400;
    
    numero(n1);
    numero(n2);
    numero(n3);
    
    return 0;
}

template <class TIPOD>
void numero (TIPOD num) {
    if(num<0) {
    num = num * -1;
    }
    cout << "El valor absoluto este numero es " << num<< endl;
    
}