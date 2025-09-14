// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include <iostream>

#include <string>
using namespace std;


//Ejercicio: clase Persona

class Persona {
    protected:
    string nombre;
    int edad;
    public:
    Persona(string _nombre, int _edad){
        nombre = _nombre;
        edad = _edad;
    }
    void showInformation(){
        cout << nombre << endl;
        cout << edad << endl;
    }
};
class Estudiante : public Persona {
    private:
    string universidad;
    double calificacion;
    public:
    Estudiante(string _nombre, int _edad, string _universidad, double _calificacion) : Persona (_nombre,_edad){
        universidad = _universidad;
        calificacion = _calificacion; 
    }
    void showInformation() {
        Persona::showInformation();
        cout << universidad << endl;
        cout << calificacion << endl;
    }
};


int main () {
    
    Persona persona1("Josmar",23);
    
    persona1.showInformation();
    
    Estudiante persona2("Jose", 25, "Antonio Jose de sucre", 16.45);
    persona2.showInformation();
}