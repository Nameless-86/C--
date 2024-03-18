#include <cstdlib>
#include <iostream>

int main()
{
    double f[5]; // array de 5 doubles f[0],..., f[4]
    int m[10];   // array of 10 ints
    f[4] = 2.5;
    m[2] = 4;

    std::cout << f[4];    // me da 2.5
    std::cout << f[m[2]]; // tambien me da 2.5 m[2] es 4 y f[4] es 2.5

    int a[] = {1, 2, 3, 4, 5}; // array de 5 ints inicializa a[5]
    bool b[] = {true, false};  // array de 2 bools inicializa b[2]

    char c[] = {'a', 'b', 'c'};        // array de 3 char inicializa c[3]
    char *p = c;                       // p apunta a c[0]
    char *q = c;                       // q tambien apunta a c[0]
    std::cout << c[2] << p[2] << q[2]; // sale ttt

    return 0;
}