#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>pass(n);
    for ( int i=0 ; i<n ; i++ )
    {
        vector<int>p(5);
        for ( int j=0 ; j<3 ; j++ )
        {
            string t;
            cin >> t;
            if ( t[2] == 'T' )
            {
                if ( t[0] == 'A') p[1] = 1;
                else if ( t[0] == 'B') p[2] = 1;
                else if ( t[0] == 'C') p[3] = 1;
                else if ( t[0] == 'D') p[4] = 1;
            } 
        }
        int j=1;
        for ( ; j<5 ; j++ )
        {
            if ( p[j] == 1 ) break;
        }
        pass.push_back(j);
    }
    for ( auto p:pass )
    {
        cout << p;
    }
    cout << endl;
    return 0;
}