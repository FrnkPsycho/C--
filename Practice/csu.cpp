#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    string t;
    while ( cin >> t )
    {
        int csu[3] = {0};
        int min=0;
        cin.get();
        for ( int i=0 ; i<t.length() ; i++ )
        {
            if ( t[i] == 'C' ) csu[0]++;
            else if ( t[i] == 'S' ) csu[1]++;
            else if ( t[i] == 'U' ) csu[2]++;
        }
        min = csu[0];
        if ( csu[1] < min ) min = csu[1];
        if ( csu[2] < min ) min = csu[2];
        cout << min << endl;
    }
    return 0;
}