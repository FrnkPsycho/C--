#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    double max=0; 
    cin >> t;
    while ( t-- )
    {
        double re,im;
        cin >> re >> im;
        fabs(re);fabs(im);
        double mod;
        mod = sqrt( re * re + im * im );
        if ( mod > max ) max = mod;
    }
    printf("%.2f\n",max);
    return 0;
}