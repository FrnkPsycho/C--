#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    long long ret = 0;
    cin >> n;
    for ( int i=1 ; i<=n ; i++ )
    {
        long long sum=1;
        for ( int j=1 ; j<=i ; j++ )
        {
            sum *= j;
        }
        ret += sum;
    }
    cout << ret;
    return 0;
}