#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,sum=1;
    cin >> t;
    for ( int i=0 ; i<t-1 ; i++ )
    {
        sum = (sum + 1)*2;
    }
    cout << sum;
    return 0;
}