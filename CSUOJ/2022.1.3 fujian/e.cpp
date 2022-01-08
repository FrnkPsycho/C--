#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

int main()
{
    ll t;
    while ( cin >> t )
    {
        if ( t == 1 ) cout << "N" << endl;
        else if ( t==2 ) cout << "Y" << endl;
        else
        {
            for ( int i=2 ; i<t ; i++ )
            {
                if ( t%i == 0 )
                {
                    cout << "N" << endl;
                    break;
                }
                if ( i == t-1 ) cout << "Y" << endl;
            }
        }
    }
    return 0;
}