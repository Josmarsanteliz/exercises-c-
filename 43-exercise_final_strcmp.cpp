// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char name[50];
    char name2[50];
    
    cout << "Indica el primer nombre"<< endl;
    cin.getline(name,50);
    
    cout << "Indica el segundo nombre" << endl;
    cin.getline(name2,50);
    
    if(strcmp(name,name2) == 0) {
        
        cout << "Ambas son iguales";
    } else if (strcmp(name,name2) > 0){
        
        cout << name <<" Es mayor a palabra dos";
    } else {
        cout << name2 << " Es mayor a palabra 1";
    }
   
    
    
}
