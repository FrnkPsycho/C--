#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

int main()
{
    ll t;
    for ( int i=1 ; i<=9 ; i++ )
    {
        for (int j = 0; j <= 9; j++)
        {
            for (int k = 0; k <= 9; k++)
            {
                int m = i*100+j*10+k;
                if ( i*i*i + j*j*j + k*k*k == m ) cout << m << " ";
            }
        }
    }
    return 0;
}