
#include <iostream>
#include <string>

using namespace std;


class Fecha {
    private:
    int dia,mes,anio;
    public:
    //constructor 1
    Fecha(int _dia,int _mes,int _anio){
        dia = _dia;
        mes = _mes;
        anio = _anio;
    }
    //constructor 2
    Fecha(long fecha) {
        anio = int(fecha/10000);
        mes = int((fecha-anio*10000-mes)/100);
        dia = int(fecha-anio*10000-mes*100);
    }
    void mostrarFecha(){
        cout <<  "La fecha de hoy es " << "/" << dia << "/"  <<  mes << "/" << anio;
    }
    
};

int main () {
    
    Fecha hoy(10,9,25);
    Fecha ayer(20250924);
    
    hoy.mostrarFecha();
    ayer.mostrarFecha();
    
    return 0;
}

