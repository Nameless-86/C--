#include <iostream>
#include <string>

int main()
{
    std::string answer = "Nicola";
    int age_answer = 33;
    std::string guess;
    std::cout << "Guess my name: ";
    std::cin >> guess;

    int age_guess;
    std::cout << "Guess my age: ";
    std::cin >> age_guess;

    if (guess == answer && age_guess == age_answer)
    {
        std::cout << "You got it!";
    }
    else
    {
        std::cout << "Incorrect guess";
    }
    return 0;
}