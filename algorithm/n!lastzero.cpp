#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        int sum = 0;
        while (n > 0)
        {
            sum += n / 5;
            n /= 5;
        }
        cout << sum << endl;
    }
    return 0;
}