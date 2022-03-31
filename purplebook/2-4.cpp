#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,m;
    while (cin >> n >> m)
    {
        if ( n==0 && m==0 ) break;
        double sum=0;
        for ( ; n<=m ; n++ )
        {
            sum += 1.0 / (n*n);
        }
        printf("%.5f",sum);
    }
    return 0;
}