#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while ( cin >> n )
    {
        int good=0;
        for ( int i=1 ; i<n ; i++ )
        {
            for ( int j=i+1 ; j<=n ; j++ )
            {
                if ( (i*j) % (i+j) == 0 )
                {
                    good++;
                }
            }
        }
        cout << good << endl;
    }
    return 0;
}