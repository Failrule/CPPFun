#include <iostream>

using namespace std;

void imprarray(int arr[], int tam)
{
    cin >> tam;
    for(int x=0;x<tam;x++)
    {
        cout << arr[x] << " ";
    }
}

int main()
{
    int matrix[5]{5,2,5,12,1};
    imprarray(matrix, 5);
}