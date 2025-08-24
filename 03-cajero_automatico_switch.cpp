
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include <iostream>
using namespace std;

//Hacer un programa que simule un cajero automático 
//con un saldo inicial de 1000 dólares
//inicio: variable saldo inicial
//añadir opciones del cajero, ingresar,retirar, o salir
/*
Si le doy a la opcion a, debo ingresar el dinero 
y sumarle a los 1000
Si le doy a retirar dinero debo restarle al saldo restante
Si el dinero que ingresa es mayor al que tiene en el cajero
debo colocarle un mensaje
*/
//fin: saldo final, 
int main () {
    
    int saldo_inicial = 1000,ingreso,restante, saldo_final;
    char opc;
    
    
    cout << "a. ingresa tu dinero :" << endl;
    cout << "b. retira tu dinero :" << endl;
    cout << "c. salir" << endl;
    cout << "Opciones " << endl;
    cin >> opc;
     
     switch (opc) {
         case 'a': cout << "Ingresa añadir tu monto ";
         cin >> ingreso;
         
         saldo_final = saldo_inicial + ingreso;
         cout << "Tu saldo final es " << saldo_final;
         break;
         case 'b':  cout << "Ingresa tu a retirar monto ";
         cin >> restante;
           if(restante > saldo_inicial) {
                cout << "No tienes esa cantidad de saldo";
            } else {
                saldo_final = saldo_inicial - restante;
                cout << "Tu saldo final es " << saldo_final;
            }
         
            
         
         break;
         case 'c': cout << "Saliste ";
         break;
     }
    
    return 0;
    
}