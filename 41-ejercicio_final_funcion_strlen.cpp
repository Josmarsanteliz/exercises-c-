// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include <iostream>
#include <string.h>
using namespace std;


int main () {
    
    char caracteres[100];
    int longitud = 0;
    cout << "Digita una cadena de caracteres";
    cin.getline(caracteres,100);
    
    longitud = strlen(caracteres);
    
    if(longitud >= 10) {
        
         cout <<"Supera los 10! Felicidades"<< longitud;
        
    } else {
        
        cout << "Ingresa mas caracteres!";
    }
   
    
    
    return 0;
    
    
    
}