#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

int boundary = 5005;
vector<int> prime(boundary, 1);
int fake[5005];

int main()
{
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
    int k=0;
    for (int i = 1; ; i++)
    {
        if (prime[i] == 1)
            fake[k++] = i;
        else
        {
            int temp = i;
            int flag = 0;
            while (temp != 0)
            {
                int m = temp % 10;
                if (m != 2 && m != 3 && m != 5 && m != 7)
                {
                    flag = 1;
                    break;
                }
                temp /= 10;
            }
            if (!flag)
                fake[k++] = i;
        }
        if (k > 5000)
            break;
    }
    ll t;
    while ( cin >> t )
    {
        cout << fake[t-1] << endl;
    }
    return 0;
}