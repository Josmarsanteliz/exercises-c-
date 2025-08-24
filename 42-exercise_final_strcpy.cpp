// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char name[50];
    char name2[50];
    
    
    cout << "Ingresa tu nombre completo";
    cin.getline(name,50);
    
    strcpy(name2,name);
    
    cout << "El nombre de usuario que ingresaste fue " << name2;
    
    
}
