#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

int main()
{
    vector<long long> prime;
    prime.push_back(2);
    prime.push_back(3);
    for (int i = 4; prime.size() <= MAX; i++)
    {
        for (int j = 2; j <= (int)sqrt(i); j++)
        {
            if (i % j == 0)
            {
                // prime[k++] = i;
                break;
            }
            else if (j == (int)sqrt(i))
            {
                prime.push_back(i);
            }
        }
    }
    int l;
    cin >> l;
    cout << prime[l];
    return 0;
}