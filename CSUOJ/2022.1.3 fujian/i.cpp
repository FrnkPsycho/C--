#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

int main()
{
    ll t;
    string s;
    while ( cin >> t )
    {
        vector<int>n;
        for ( int i=0 ; i<t ;i++ )
        {
            int k;
            cin >> k;
            n.push_back(k);
        }
        if ( n[0] % 2 != 0 && n[t-1] %2 !=0 && t %2 !=0 ) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}