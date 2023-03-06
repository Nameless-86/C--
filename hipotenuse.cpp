#include <iostream>
#include <cmath>

int main()
{
    double a, b, c;

    std::cout << "Please enter sides: " << std::endl;
    std::cin >> a;
    std::cin >> b;
    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "The hipotenuse is: " << c << std::endl;

    return 0;
}