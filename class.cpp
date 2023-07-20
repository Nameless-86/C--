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
Counter ctr;                    // Instance of Counter
cout << ctr.getCount() << endl; // Print the counter 0
ctr.increaseBy(1);              // Increment the counter by 1
cout << ctr.getCount() << endl; // Print the counter 3
ctr.increaseBy(5);              // Increment the counter 5
cout << ctr.getCount() << endl; // prints 8