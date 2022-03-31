#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

int main()
{
    ll t;
    vector<long long>fib(92);
    fib[1] = 1;
    fib[2] = 2;
    for ( int i=3 ; i<=91 ; i++ )
    {
        fib[i] = fib[i-1] + fib[i-2];
    }
    long long a;
    while ( cin >> a )
    {
        for ( int i=1 ; i<=91 ; i++ )
        {
            if ( fib[i] == a )
            {
                cout << i << endl;
                break;
            }
            if ( i==91 ) cout << "0" << endl;
        }
    }
    return 0;
}