#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

int main()
{
    ll t;
    int m;
    while ( cin >> m )
    {
        int min = 9999999;
        for ( int a=0; a<=m/8 ; a++ )
        {
            for ( int b=0 ; b<=m/18 ; b++ )
            {
                for ( int c=0 ; c<=m/38 ; c++ )
                {
                    int t = a*8 + b*18 + c*38;
                    int pen = a+b+c;
                    if ( t>68 ) pen++;
                    if ( m-t < 0 || m-t >= 8 ) continue;
                    else
                    {
                        if ( pen < min ) min = pen;
                    }
                }
            }
        }
        cout << min << endl;
    }
    return 0;
}