#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    while ( scanf("%d",&t) != EOF )
    {
        int res;
        if ( t<1 ) res=t*t;
        else if ( t>=1 && t<10 ) res = 2*t - 1;
        else if ( t>=10 ) res = 3*t - 12;
        cout << res << endl;
    }
    return 0;
}