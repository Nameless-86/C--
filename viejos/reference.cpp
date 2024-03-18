#include <string>
#include <iostream>

int main()
{
    std::string author = "Samuel Clemens";
    std::string &penName = author; // penName is an alias for author
    penName = "Mark Twain";        // now author =  "Mark Twain"
    std::cout << author;           // outputs "Mark Twain"

    return 0;
}