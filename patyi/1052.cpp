#include <bits/stdc++.h>

using namespace std;

int main()
{
    setbuf(stdout, 0);
    vector<vector<string>>v;
    for ( int i=0 ; i<3 ; i++ )
    {
        string s;
        vector<string>str;
        getline(cin,s);
        int a,b;
        for ( a=0 ; a<s.size() ; a++ )
        {
            if ( s[a] == '[' )
            {
                for ( b=a+1 ; b<s.size() ; b++ )
                {
                    if ( s[b] == ']' )
                    {
                        str.push_back(s.substr(a+1,b-a-1));
                        break;
                    }
                }
                a=b;
            }
        }
        v.push_back(str);
    }
    int k;
    cin >> k;
    for ( int i=0 ; i<k ; i++ )
    {
        int lh,le,m,re,rh;
        cin >> lh >> le >> m >> re >> rh;
        if ( lh > v[0].size() || rh > v[0].size() || le > v[1].size() || re > v[1].size() || m > v[2].size() || lh < 1 || le < 1 || m < 1 || rh < 1 || re < 1)
        {
            cout << "Are you kidding me? @\\/@" << endl;
        }
        else cout << v[0][lh-1] << "(" << v[1][le-1] << v[2][m-1] << v[1][re-1] << ")" << v[0][rh-1] << endl;

    }
    return 0;
}