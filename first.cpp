#include <cstdlib>
#include <iostream>

/*this program inputs two numbers x and y and outputs their sum*/
int main()
{
    int x, y;
    std::cout << "Please enter two numbers: ";
    std::cin >> x >> y; // Input x and y
    int sum = x + y;    // compute their sum
    std::cout << "Their sum is " << sum << std::endl;
    return 0;
}