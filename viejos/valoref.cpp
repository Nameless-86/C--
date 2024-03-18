#include <iostream>
#include <string>

void f(int value, int &ref) // Uno por valor y otro por referencia
{
    value++;                         // No afecta al argumento
    ref++;                           // Afecta al argumento
    std::cout << value << std::endl; // sale 2
    std::cout << ref << std::endl;   // sale 6
}

int main()
{
    int cat = 1;
    int dog = 5;
    f(cat, dog);                   // pasa cat por valor y dog por referencia
    std::cout << cat << std::endl; // sale 1
    std::cout << dog << std::endl; // sale 6

    return 0;
}