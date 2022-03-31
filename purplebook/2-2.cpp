#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    int cases=0;
    while ( cin >> a >> b >> c )
    {
        cases++;
        bool yes = false;
        cout << "Case " << cases << ": ";
        for ( int i=10 ; i<=100 ; i++ )
        {
            if ( i % 3 == a && i % 5 == b && i % 7 == c )
            {
                cout << i;
                yes = true;
                break;
            } 
        }
        if (!yes) cout << "No answer";
    }
    return 0;
}