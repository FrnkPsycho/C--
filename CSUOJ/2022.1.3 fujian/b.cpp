#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

int main()
{
    ll n,m;
    while ( cin >> n >> m )
    {
        ll odd=0,even=0;
        for ( int i=n ; i<=m ; i++ )
        {
            if ( i%2==0 ) even+=i*i;
            else odd+=i*i*i;
        }
        cout << even << " " << odd << endl;
    }
    return 0;
}