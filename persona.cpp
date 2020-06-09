#include <iostream>

using namespace std;

class persona
{
public:
    void saludar()
    {
        cout << "hola" << endl;
    }
};

int main()
{
    persona humano;
    humano.saludar();
}