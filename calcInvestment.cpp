#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <ctime>

using namespace std;

int main()
{
    float investment, interest;
    cout << "Insert investment:";
    cin >> investment;
    cout << "insert interest:";
    cin >> interest;

    for (int i = 0; i < 10; i++)
    {
        investment = investment + (investment * interest);
    }
    cout << investment << endl;
    

    return 0;
}
