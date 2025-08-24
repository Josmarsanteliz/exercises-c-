
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include <iostream>
using namespace std;

/*
entrada: un número
tres opciones: a.cubo del número,b.par o impar, b.salir
salida: resultado
*/

int main () {
    
    int n,cubo,resultado;
    char opciones;
    
    cout << "a.Cubo del número " << endl;
    cout << "b.Par o impar" << endl;
    cout << "c.Salir " << endl;
    cin >> opciones;
    switch(opciones) {
        case 'a': cout << "Ingresa el número para obtener su cubo";
        cin >> n;
        cubo = n * n * n;
        cout << "Tu resultado es " << cubo << endl;
        break;
        case 'b': cout << "Verifica si es par o impar ";
        cin >> n;
        resultado = n % 2;
        
        if (resultado == 0) {
            cout << "Tu resultado es par";
        } else {
            cout << "Tu resultado es impar";
        }
        break;
        case 'c': cout << "Saliste ";
    }
    
    
    
    return 0;
}