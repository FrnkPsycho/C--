#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    cin >>a>>b>>c;

    int  zs = a / b;
    int ys = a % b;
    cout << zs << ".";
    for ( int i=0 ; i<c ; i++ )
    {

        ys *= 10;
        zs = ys / b;
        ys = ys % b;
        if ( i==c-1 )
        {
            if ( zs > 4 ) zs++;
        }
        cout << zs;
    }

    // double d = a/b;
    // for ( int i=0 ; i<c ; i++ ) d /= 0.1;
    // double g = d - (int)d;
    // if ( g>=0.5 ) d = (int)d + 1;
    // else d = (int)d;
    // while ( c-- ) d /= 10;
    // cout << d;
    // cout << setprecision(c) << d;
    return 0;
}