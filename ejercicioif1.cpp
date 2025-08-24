
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
using namespace std;
//Ingresa un número,
//ingresa un segundo número
//si es el número es par haz esto
//si el número es impar haz esto
//un resultado
int main()
{
      int n1 ,n2;
      int resultado;
      cout << "Ingresa un número ";
      cin >> n1;
      cout << "Ingresa su divisor ";
      cin >> n2;
      resultado = n1 % n2;
      if (resultado == 0) {
          cout << "Es par " << resultado;
          
      } else {
          cout << "Es impar " << resultado;
          
      }
    return 0;
}
