#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <ctime>

using namespace std;

int main()
{
    for (int i = 0; i <= 10; i++)
    {
        cout << i << endl;
    }

    int arr1[] = {1, 2, 3};
    int arrSize = sizeof(arr1) / sizeof(arr1[0]);
    for (int i = 0; i < arrSize; i++)
    {
        cout << arr1[i] << endl;
    }

    for (auto x : arr1)
        cout << x << endl;

    for (int j = 0; j <= 20; j++)
    {
        if ((j % 2) == 0)
        {
            cout << "Even: " << j << endl;
        }
        else
        {
            cout << "Not even" << endl;
        }
    }

    

    return 0;
}