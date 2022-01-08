#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

int main()
{
    ll t;
    while ( cin >> t )
    {
        int res=0;
        for ( int i=7 ; i<=t ; i++ )
        {
            if ( i%7==0 ) res++;
            else
            {
                string s = to_string(i);
                for ( int i=0 ; i<s.length() ; i++ )
                {
                    if ( s[i] == '7' )
                    {
                        res++;
                        break;
                    }
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}