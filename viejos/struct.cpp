#include <string>
#include <cstdlib>
#include <iostream>

int main()
{
    enum MealType
    {
        NO_PREF,
        REGULAR,
        LOW_FAT,
        VEGAN
    };

    struct Passenger
    {
        std::string name;        // passenger name
        MealType mealPref;       // passenger meal preference
        bool isFreqFlyer;        // in the frequent flyer program?
        std::string freqFlyerNo; // freq flyer number
    };

    Passenger pass = {"John Smith", VEGAN, true, "293145"};

    pass.name = "Pocahontas";
    pass.mealPref = REGULAR;

    Passenger *p;
    //...
    p = new Passenger;      // p apunta al pasajeo nuevo
    p->name = "Pocahontas"; // lleno los campos
    p->mealPref = REGULAR;
    p->isFreqFlyer = false;
    p->freqFlyerNo = "NONE";

    delete p; // destruir el objeto donde p apunta

    char *buffer = new char[500]; // alocate a buffe of 500 hcas
    buffer[3] = 'a';              // elements are still accessed using []
    delete[] buffer;              // delete the buffer

    return 0;
}


