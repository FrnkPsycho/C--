#include <bits/stdc++.h>

using namespace std;

int main()
{
    // 模拟竖式取余
    string n;
    long long p;
    while (cin >> n >> p)
    {
        long long ans = 0;
        for (int i = 0; i < n.length(); i++)
        {
            ans = ans * 10 + (n[i] - '0');
            ans %= p;
        }
        cout << ans << endl;
        
    }

    return 0;
}