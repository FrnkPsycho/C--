#include <bits/stdc++.h>

using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int boundary = 1000;
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

    string num;
    while ( cin >> num )
    {
        bool flag = true;
        while ( 1 )
        {
            if (num.length() < 3)
            {
                int l = stod(num);
                if (prime[l] != 1)
                {
                    flag = false;
                    break;
                }
                else break;
            }
            else
            {
                string k;
                k = num.substr(0,3);
                int kk = stod(k);
                if (prime[kk] != 1)
                {
                    flag = false;
                    break;
                }
                num.erase(0,3);
            }
            if ( num.length() == 0 ) break;
        }

        if ( flag ) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}