#include <bits/stdc++.h>

using namespace std;

int main()
{
    // 高效素数表 10001为边界可修改
    int boundary = 10001;
    vector<int> prime(boundary, 1);
    prime[1] = 0;
    prime[0] = 0;
    for (int i = 4; i < boundary; i++)
    {
        if (prime[i] == 0)
            continue;
        for (int j = 2; j <= (int)sqrt(i); j++)
        {
            if (i % j == 0)
            {
                prime[i] = 0;
                break;
            }
            else if (j == (int)sqrt(i))
            {
                for (int k = 2; k * i <= boundary; k++)
                {
                    prime[k * i] = 0;
                }
            }
        }
    }

    return 0;
}