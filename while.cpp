#include <iostream>

using namespace std;

int main()
{
    int a = 1;
    while (a == 1)
    {
        cout << "a es 1. Nuevo valor: ";
        cin >> a;
    }
    cout << "Salimos de while" << endl;
}