#include <iostream>
#include <cstdlib>

const int Cat = 1; // global cat

int main()
{
    const int Cat = 2; // cat local to main
    std::cout << Cat;  // outputs local cat 2

    return 0;
}

int dog = Cat; // dog = 1 from global cat