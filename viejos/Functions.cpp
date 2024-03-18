#include <iostream>
#include <string>

bool evenSum(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return (sum % 2) == 0;
}

int main()
{
    int list[] = {4, 2, 7, 8, 5, 1};
    bool result = evenSum(list, 6);
    if (result)
        std::cout << "Sum is even \n";
    else
        std::cout << "Sum is odd \n";

    return 0;
}
