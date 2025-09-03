
#include <iostream>
#include <string>

using namespace std;

class Notas{
    private:
    string titulo;
    string contenido;
    
    public:
    Notas(string titulo, string contenido) {
        this->titulo = titulo;
        this->contenido = contenido;
    }
    void mostrarNota() {
        cout << "Tu materia es:" << this->titulo << endl;
        cout << "Tu nota es: " << this->contenido << endl;
    }
    void editarContenido (string nuevoContenido) {
        contenido = nuevoContenido;
    }
    
};

int main () {
    Notas estudiante1("Matematicas","19.5");
    Notas estudiante2("Matematicas", "17");
    
    estudiante1.mostrarNota();
    estudiante2.mostrarNota();
    
    estudiante1.editarContenido("20");
    
    estudiante1.mostrarNota();
    return 0;
}
