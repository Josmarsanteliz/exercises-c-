#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Estudiante {
private:
    string nombre;
    int edad;
    double promedio;
public:
    Estudiante(string _nombre, int _edad, double _promedio) {
        nombre = _nombre;
        edad = _edad;
        promedio = _promedio;
    }
    void mostrarInformacion() const {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Promedio: " << promedio << endl;
    }
    bool esAprobado() const {
        return promedio >= 60;
    }
};

int main() {
    string nombre;
    int edad;
    double promedio;
    char continuar = 's';
    
    vector<Estudiante> estudiantes;
    
    do {
        cout << "Ingresa el nombre del estudiante";
        cin.ignore();
        getline(cin, nombre);
        
        cout << "Ingresa la edad del estudiante: ";
        cin >> edad;
        
        cout << "Ingresa el promedio del estudiante: ";
        cin >> promedio;
        
        estudiantes.push_back(Estudiante(nombre, edad, promedio));
        
        cout << "Desea continuar (s/n)? ";
        cin >> continuar;
        
    } while (continuar == 's' || continuar == 'S');
    
    cout << "\nInformacion de los estudiantes:" << endl;
    
    for (const auto& estudiante : estudiantes) {
        estudiante.mostrarInformacion();
    }
    
    int estudiantesAprobados = 0;
    
    for(const auto& estudiante: estudiantes){
        if(estudiante.esAprobado()){
            estudiantesAprobados++;
        }
    }
    
    cout << "\nEl numero de estudiantes aprobados es " << estudiantesAprobados << endl;
    
    return 0;
}