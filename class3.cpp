// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include <iostream>

#include <string>
using namespace std;
#include <algorithm> 

//Ejercicio: clase Libro

class Libro {
    private:
    string titulo;
    string autor;
    int anioPublicacion;
    public:
    Libro(string _titulo, string _autor, int _anioPublicacion) {
        titulo = _titulo;
        autor = _autor;
        anioPublicacion = _anioPublicacion;
        
    }
    void mostrarInformacion() {
        cout << "Datos del libro titulo: " << titulo;
        cout << "Datos del libro autor: " << autor;
        cout << "Datos del libro anio: " << anioPublicacion;
        
    }
    bool esAntiguo() {
        return anioPublicacion < 2000;
    }
};

int main() {
    
    Libro GameOfThrones("GameOfThrones","Phillips",1999);
    Libro Naruto("Naruto","Uzumaki", 2001);
    
    GameOfThrones.mostrarInformacion();
    cout << "¿Es antiguo?" << (GameOfThrones.esAntiguo() ? "Si" : "No") << endl << endl;
    
    Naruto.mostrarInformacion();
    cout << "¿Es antiguo?" << (Naruto.esAntiguo() ? "Si" : "No") << endl << endl;
    
}