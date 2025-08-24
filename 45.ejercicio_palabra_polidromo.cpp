// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include <iostream>

#include <string>
using namespace std;
#include <algorithm> 

//dato de entrada: palabra
//dato de salida: palabra al reves, y si palabra al reves es igual a palabra de inicio
int main () {
    
    string palabra,palabraReverse;
    
    cout << "Ingresa la palabra palíndromo";
    getline(cin,palabra);
    
    palabraReverse = palabra;
  
    reverse(palabraReverse.begin(), palabraReverse.end());
    
  
    
    if(palabra == palabraReverse) {
        
        cout << "Es palindromo" << endl;
    } else {
        cout << "No es palindromo" << endl;
    }
      cout << palabra;
    
    return 0;
    
    
    
    
    
}