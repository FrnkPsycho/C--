#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int maybe=0,absolute=0;
    double low_limit,observe_limit;
    cin >> n >> low_limit >> observe_limit;
    for ( int i=0 ; i<n ; i++ )
    {
        int days,low_days=0;
        cin >> days;
        int half = days/2;
        for ( int k=0 ; k<days ; k++ )
        {
            double u;
            cin >> u;
            if ( u < low_limit )
            {
                low_days++;
            }
        }
        if (days > observe_limit && low_days > half)
        {
            absolute++;
        }
        else if ( low_days > half )
        {
            maybe++;
        }
    }
    double mp,ap;
    mp = (double)maybe / (double)n * 100.0;
    ap = (double)absolute / (double)n * 100.0;
    printf("%.1f",mp); 
    printf("%% ");
    printf("%.1f",ap);
    printf("%%\n");

    return 0;
}