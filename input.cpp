#include <iostream>
#include <string>

int main()
{
    std::string name;
    int age;

    std::cout << "Enter your full Name: \n";
    std::getline(std::cin >>std::ws, name);

    std::cout << "Enter your age: \n";
    std::cin >> age;

    std::cout << name << std::endl;
    std::cout << age << std::endl;

    return 0;
}
