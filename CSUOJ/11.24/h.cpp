#include <bits/stdc++.h>

using namespace std;

int main()
{
    string n;
    long long p;
    while ( cin >> n >> p )
    {
        long long ans=0;
        for ( int i=0 ; i<n.length() ; i++ )
        {
            ans = ans * 10 + (n[i]-'0');
            ans %= p;
        }
        cout << ans << endl;
        // int i=0;
        // int bit = -1;
        // for ( i ; i<n.length() ; i++ )
        // {
        //     int d = n[i] - '0';
        //     if ( bit == -1 )
        //     {
        //         if ( d % p > 0 ) bit = d%p;
        //     }
        //     else
        //     {
        //         if ( ( bit*10 + d) % p >= 0)
        //         {
        //             bit = (bit * 10 + d) % p;
        //         }
        //     }
        // }
        // if ( bit != -1 )
        // {
        //     cout << bit << endl;
        // }
    }
    
    return 0;
}