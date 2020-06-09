#include <iostream>

using namespace std;

int factorial(int n);

int main()
{
    cout << factorial(4);
}

int factorial(int n) 
{
    if (n==1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n-1);
    }
}