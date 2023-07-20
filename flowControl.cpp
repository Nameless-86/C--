#include <cstdlib>
#include <iostream>

int main()
{
    if (snowLevel < 2)
    {
        gotoClass(); // do this if snow level is less than 2
        comeHome();
    }
    else if (snowLevel < 5)
    {
        haveSnowballFight(); // if is at least 2 but less than 5
    }
    else if (snowLevel < 10)
    {
        goSkiing(); // if level is at least 5 but less than 10
    }
    else
    {
        stayAtHome(); // if snow level is 10 or more
    }
    ////////////////////////////////////////////////////////////
    char command;
    std::cin >> command; // input command character
    switch (command)     // switch based on command value
    {
    case 'I': // if (command == 'I')
        editInsert();
        break;
    case 'D':
        editDelete(); // else if (command == 'D')
        break;
    case 'R':
        editReplace(); // else if (command == 'R)
        break;
    default: // else
        std::cout << "Unknown command";
        break;
    }
    /////////////////////////////////////////////////////////

    int a[100];
    //...
    int i = 0;
    int sum = 0;
    while (i < 100 && a[i] >= 0)
    {
        sum += a[i++];
    };
    //////////////////////////////////////////////////////
    const int NUM_ELEMENTS = 100;
    double b[NUM_ELEMENTS];
    //...
    for (int i = 0; i < NUM_ELEMENTS; i++)
    {
        if (b[i] > 0)
        {
            std::cout << b[i] << '\n';
        }
    }
    ////////////////////////////////////////////////////
    int c[100];
    //...
    int sum = 0;
    for (int i = 0; i < 100; i++)
    {
        if (c[i] < 0)
            break;
        sum += a[i];
    }

    return 0;
}