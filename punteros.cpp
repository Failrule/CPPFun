#include <iostream>
using namespace std;

int main()
{
    int a = 4;

    cout << &a << endl; //Se muestra la dirección de la memoria donde se aloja la variable mediante el operador "dirección de" '&'

    int *pa; //Un puntero es una variable que tiene que ser declarada como cualquier otra y se hace mediante '*'.
    //Éste contendrá una dirección de memoria para un entero

    int var = 50;
    int *p;
    p = &var;

    cout << var << endl; // Muestra el contenido de var

    cout << p << endl; // Muestra la dirección de memoria de var

    cout << *p << endl; // Muestra el contenido de lo que hay en la dirección de memoria de var

    /* No hay que confundir * cuando declara un puntero con * cuando se usa para obtener el valor de lo que está localizado en la memoria.
    Simplemente son dos cosas completamente diferentes representadas con el mismo signo */

    int x = 5;
    int *px = &x;

    x = x + 4;
    x = *px + 4;
    *px = *px + 4;

    /* Como px está apuntando a la variable x, desreferenciar 
    al puntero (*px) es representar exactamente lo mismo que la variable x */
}