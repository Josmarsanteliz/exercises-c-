#include <iostream>
#include <math.h>
using namespace std;
int main() {
    float x,y, resultado = 0;
    cout << "Digite el valor de x " << endl; cin >> x;  
    cout << "Digite el valor de y " << endl; cin >> y; 

    resultado = (sqrt(x))/(pow(y,2) - 1);

    cout << "tu resultado es " << resultado;
    
    return 0;
}