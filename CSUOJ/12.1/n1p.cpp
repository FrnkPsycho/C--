#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool isHW(int n)
{
    string s1 = to_string(n);
    string s2 = s1;
    reverse(s1.begin(), s1.end());
    if (s1 == s2)
    {
        return true;
    }
    return false;
}

int main()
{
    int L, R;
    cin >> L >> R;
    int cnt = 0;
    for (int i = L; i <= R; i++)
    {
        if (isPrime(i) && isHW(i))
        {
            cout << i << " ";
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}