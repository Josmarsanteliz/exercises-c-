
#include <iostream>
//Funciones

using namespace std;


int numeroM (int x, int y);

int main () {
    
    int n1, n2,resultado;
    
    cout << "Ingresa el valor de los dos numeros" << endl;
    cin >> n1>> n2;
    
    resultado =  numeroM(n1, n2);
    cout << " El numero mayor es " << resultado;
    
    return 0;
}


int numeroM (int x, int y) {
    
    if(x > y) {
        return x; 
    } else {
        return y;
    }
    
}