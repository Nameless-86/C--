enum MealType
{
    NO_PREF,
    REGULAR,
    LOW_FAT,
    VEGAN
};

class Passenger
{
public:
    Passenger();
    bool isFrequentFlyer() const;
    void makeFrequentFlyer(const std::string &newFreqFlyerNo);

private:
    std::string name;
    MealType mealPref;
    bool isFrequentFlyer;
    std::string freqFlyerNo;
};