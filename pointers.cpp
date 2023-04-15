#include <cstdlib>
#include <iostream>

int main()
{
    char ch = 'Q';
    char *p = &ch;      // p holds the address of ch
    std::cout << *p;    // outputs the character 'Q'

    ch = 'Z';           // ch now holds 'Z'
    std::cout << *p;    // outputs the character 'Z'

    *p = 'X';           // ch now holds 'X'
    std::cout << ch;    // outputs the character 'X'

    int* x,y,z;         // its the same as int* x; int y; int z;

    return 0;
}