#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main()
{
    for ( int i=1 ; i<=9 ; i++ )
    {
        for ( int j=0 ; j<=9 ; j++ )
        {
            int n = i*1100 + j*11 ;
            int m = round(sqrt(n));
            if ( m*m == n ) cout<<n<<" ";
        }
    }
    return 0;
}