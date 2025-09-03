
#include <iostream>
#include <string>

using namespace std;

class Personaje {
private:
    string nombre;
    int vida;
    int fuerza;

public:
    // Constructor con los nombres de variables corregidos
    Personaje(string nombrePersonaje, int vidaInicial, int fuerzaInicial) {
        nombre = nombrePersonaje;
        vida = vidaInicial;
        fuerza = fuerzaInicial;
    }

    // Nuevo método para recibir daño
    void recibirDanio(int danio) {
        vida -= danio;
        if (vida < 0) {
            vida = 0; // Aseguramos que la vida no sea negativa
        }
    }

    // Método de ataque corregido para usar el nuevo método de recibir daño
    void atacar(Personaje& enemigo) {
        cout << this->nombre << " ataca a " << enemigo.nombre << "." << endl;
        enemigo.recibirDanio(this->fuerza);
    }

    // Nombre del método corregido
    bool estaVivo() {
        return vida > 0;
    }

    string getNombre() {
        return nombre;
    }

    int getVida() {
        return vida;
    }
};

int main() {
    // Creación de los personajes
    Personaje guerrero1("Aragorn", 120, 25);
    Personaje guerrero2("Legolas", 100, 30);
    
    Personaje enemigo1("Orco", 300, 150);
    Personaje enemigo2("Trasgo", 100, 18);
    
    // Inicio del combate y datos iniciales
    cout << "--- El combate comienza ---" << endl;
    cout << guerrero1.getNombre() << " (Vida: " << guerrero1.getVida() << ") vs. " << enemigo1.getNombre() << " (Vida: " << enemigo1.getVida() << ")" << endl;
    cout << guerrero2.getNombre() << " (Vida: " << guerrero2.getVida() << ") vs. " << enemigo2.getNombre() << " (Vida: " << enemigo2.getVida() << ")" << endl;
    
    // Primer turno
    cout << "\n--- Primer turno ---" << endl;
    guerrero1.atacar(enemigo1); // Aragorn ataca al Orco
    cout << enemigo1.getNombre() << " tiene " << enemigo1.getVida() << " de vida restante." << endl;

    enemigo2.atacar(guerrero2); // El Trasgo ataca a Legolas
    cout << guerrero2.getNombre() << " tiene " << guerrero2.getVida() << " de vida restante." << endl;

    // Segundo turno
    cout << "\n--- Segundo turno ---" << endl;
    guerrero2.atacar(enemigo2); // Legolas ataca al Trasgo
    cout << enemigo2.getNombre() << " tiene " << enemigo2.getVida() << " de vida restante." << endl;

    enemigo1.atacar(guerrero1); // El Orco ataca a Aragorn
    cout << guerrero1.getNombre() << " tiene " << guerrero1.getVida() << " de vida restante." << endl;
    
    // Estado final del combate
    cout << "\n--- Fin del combate ---" << endl;
    cout << guerrero1.getNombre() << " sigue vivo: " << (guerrero1.estaVivo() ? "Sí" : "No") << endl;
    cout << enemigo2.getNombre() << " sigue vivo: " << (enemigo2.estaVivo() ? "Sí" : "No") << endl;
    
    return 0;
}
