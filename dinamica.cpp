#include <iostream>

using namespace std;

int main()
{
    int *p = new int; //Se declara una variable puntero y se le asigna memoria
    *p = 5; //Se llena esa dirección de memoria con un valor (5)
    cout << p << endl; // Imprime la dirección de la memoria de la variable dinámica
    cout << &p << endl; // Imprime la dirección de la memoria de la variable local
    cout << *p << endl; // Imprime el contenido de la variable dinámica
    delete p; //Eliminar la memoria dinámica
    p = NULL; //Vaciar el puntero
}

