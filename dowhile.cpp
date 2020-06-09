#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    do 
    {
        cout << "Adivine un número: " << endl;
        cin >> a;
    } 
    while( a != 7);

    cout << "Ganó" << endl;
}