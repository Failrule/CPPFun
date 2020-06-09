#include <iostream>

using namespace std;

int sum(int x, int y); // Se declara la función que retorna un entero

int main()
{
    int a = 3;
    int b = 5;
    int c;

    c = sum(a, b); //Llamada de la función, en este caso, asignando a una variable

    cout << a << " + " << b << " = " << c << endl;
}

int sum(int x, int y)// Cuerpo de la función declarada
{
    return x + y;
}