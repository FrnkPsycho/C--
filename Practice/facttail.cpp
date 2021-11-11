#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    while ( scanf("%d",&t) !=EOF )
    {
        int res = 0;
        while ( t > 0 )
        {
            res += t/5;
            t/=5;
        }
        cout << res << endl;
    }
    return 0;
}