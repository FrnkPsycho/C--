#include <bits/stdc++.h>

using namespace std;

int main()
{
    double m,n;
    cin >> m >> n;
    double mm = m;
    for ( int i=0 ; i<n-1 ; i++ )
    {
        m/=2;
        mm += m*2;
    }
    m/=2;
    printf("%.2f %.2f",m,mm);
    return 0;
}