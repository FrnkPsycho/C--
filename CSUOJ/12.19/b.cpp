#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

int main()
{
    ll t;
    int n;
    string dir;
    while ( cin >> n >> dir )
    {
        int face=0;
        for ( int i=0 ; i<n ; i++ )
        {
            if ( dir[i] == 'L' ) face--;
            else if ( dir[i] == 'R' ) face++;
        }
        int k=face%4;
        if ( k == 0 ) cout << "N" << endl;
        else if ( k== 1 || k == -3 ) cout << "E" << endl;
        else if ( k== 2 || k == -2 ) cout << "S" << endl;
        else if ( k== 3 || k == -1 ) cout << "W" << endl;
    }
    return 0;
}