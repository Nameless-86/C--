#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int base, exponent;
    cout << "What is the base: ";
    cin >> base;
    cout << "What is The exponent: ";
    cin >> exponent;
    cout << pow(base, exponent);
    
    return 0;
}