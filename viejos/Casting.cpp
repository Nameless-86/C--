#include <cstdlib>
#include <iostream>

int main()
{

    int cat = 14;
    double dog = (double)cat; // traditional C style cast
    double pig = double(cat); // c++ functional cast

    int i1 = 18;
    int i2 = 16;
    double dv1 = i1 / i2;                 // dv1 has value 1.0
    double dv2 = double(i1) / double(i2); // dv2 has value 1.125
    double dv3 = double(i1 / 12);         // dv3 has value 1.0

    // Explicit cast operation (Static_Casting)
    double d1 = 3.2;
    double d2 = 3.9999;
    int i3 = static_cast<int>(d1); // i3 has value 3
    int i4 = static_cast<int>(d2); // i4 has value 3

    // Implicit casting
    int i = 3;
    double d = 4.8;
    double d3 = i / d; // d3 = 0.0625 = double(i)/d
    int i3 = d3;       // i3 = 0 = int(d3)
    // WARNING ASSINGMENT MAY LOSE INFORMATION

    return 0;
}