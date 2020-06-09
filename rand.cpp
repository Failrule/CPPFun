#include <iostream>
using namespace std;

int main()
{
    srand(time(0)); //Semilla de hora actual para la función rand()

    for (int a = 0;a <= 6; a++)
        {
            cout << 1 + (rand() % 45) << " "; //Números aleatorios entre 1 y 45 usando %
        }
}