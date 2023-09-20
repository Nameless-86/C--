class Counter // Simple Counter
{
public:
    Counter();                  // Constructor
    int getCount();             // get the current count
    void increaseBy(int value); // add value to the coutn

private:
    int count; // the counter value
};

Counter::Counter() // Constructor
{
    count = 0;
}
int Counter::getCount() // get the current count
{
    return count;
}
void Counter::increaseBy(int value) // add value to the count
{
    count += value;
}

// instaciation
Counter ctr;                              // Instance of Counter
std::cout << ctr.getCount() << std::endl; // Print the counter 0
ctr.increaseBy(1);                        // Increment the counter by 1
std::cout << ctr.getCount() << std::endl; // Print the counter 3
ctr.increaseBy(5);                        // Increment the counter 5
std::cout << ctr.getCount() << std::endl; // prints 8