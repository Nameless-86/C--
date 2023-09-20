#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
    int best = 0;
    for (int a = 0; a < n; a++)
    {
        for (int b = a; b < n; b++)
        {
            int sum = 0;
            for (int k = a; k <= n; k++)
            {
                sum += array[k];
            }
            best = max(best, sum);
        }
        std::std::cout << "best"
                       << "\n";
    }
    return 0;
}