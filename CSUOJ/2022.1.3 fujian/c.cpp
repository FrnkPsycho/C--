#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

int main()
{
    ll t;
    string s;
    while ( cin >> s )
    {
        int res=0;
        for ( int i=0 ; i<s.length() ; i++ )
        {
            res+=s[i]-'0';
        }
        cout << res << endl;
    }
    return 0;
}