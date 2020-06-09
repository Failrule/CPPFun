#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int b = 2;
    int c = 1;

//AND
    if (a == 10 && b == 2 && c ==1)
    {
        cout << "AND OK" << endl;
    }
//OR
    if (a == 10 || b == 3)
    {
        cout << "OR OK" << endl;
    }
//NOT
    if ( !(a == 9) )
    {
        cout << "NOT OK" << endl;
    }
}