#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //Eje x     0  1  2
    int a[3] = {1, 2, 3};
    cout << "Normal \t\t\t" << a[1] << endl;
    //Eje y            0          1          2
    //Eje x         0  1  2    0  1  2    0  1  2
    int b[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "Bidimensional \t\t" << b[2][0] << endl;
    //Eje z                       0                             1                                  2
    //Eje y               0       1       2          0          1          2            0          1          2 
    //Eje x             0 1 2   0 1 2   0 1 2     0  1  2    0  1  2    0  1  2      0  1  2    0  1  2    0  1  2      
    int c[3][3][3] = {{{1,2,3},{4,5,6},{7,8,9}},{{10,11,12},{13,14,15},{16,17,18}},{{19,20,21},{22,23,24},{25,26,27}}};
    cout << "Tridimensional \t\t" << c[1][2][2] << endl;
    //Eje ?                            0                               1
    //Eje z                     0             1                0                1
    //Eje y                  0     1       0     1          0     1         0       1
    //Eje x                 0 1   0 1     0 1   0 1       0 1    0  1      0  1    0  1
    int d[2][2][2][2] = {{{{1,2},{3,4}},{{5,6},{7,8}}},{{{9,10},{11,12}},{{13,14},{15,16}}}};
    cout << "Polidimensional \t" << d[1][1][0][0] << endl;
}
