#include <string>
#include <iostream>

int main()
{
    std::string s = "to be ";
    std::string t = "not" + s;    // t = not to be
    std::string u = s + "or" + t; // to be or not to be
    if (s > t)                    // true: to be > not to be
        std::cout << u;           // outputs to be or not to be

    return 0;

    std::string j = "John"; // j= John
    int i = s.size();       // i = 4
    char c = s[3];          // c= n
    s += "Smith";           // ahora j = john Smith
}