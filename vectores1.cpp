
#include <iostream>
#include <vector>

using namespace std;

int main () {
    //opcional lo de colocarles la capacidad
    vector <int> records(5);
    vector <char> letras;
    //definiendo sus datos
    vector <int> numbers{25,45,30,4,5};
    //sintaxis diferente guardamos ese valor en las 350 posiciones
    vector <double> salaries_base(15, 2125.50);
    
    for(int i=0; i<5;i++) {
        cout << salaries_base[i] << endl;
    }
    
    //recorrer con bucle while
    
    int i = 0;
    //metodo funciones de vector, while es mejor con vectores
    while(i < salaries_base.size()) {
        cout << salaries_base[i]<< endl;
        i++;
    }
    
    return 0;
}

