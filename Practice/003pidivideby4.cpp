#include <bits/stdc++.h>

using namespace std;

int main()
{
    double sum=0;
    for ( int i=0 ; ; i++ )
    {
        double t;
        t = 1.0 / (i*2+1);
        if ( i % 2 == 0 ) sum += t;
        else sum -= t;
        if ( t < 1e-6 ) break;
    }
    printf("%.10f",sum);
    return 0;
}