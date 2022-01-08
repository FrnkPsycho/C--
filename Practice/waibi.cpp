#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

int main()
{
    vector<string>str;
    char t;
    string s;
    while ( cin >> s )
    {
        str.push_back(s);
        t = getchar();
        bool flag=true;
        if ( t=='\n') 
        {
            map<char,bool>m;
            if ( str.size() > 10 ) 
            {
                flag=false;
                break;
            }
            for ( int i=0 ; i<str.size() ; i++ )
            {
                for ( int j=0; j<str[i].length() ; j++ )
                {
                    strlwr(&str[i][j]);
                    m[str[i][j]] = true;
                }
            }
            int n=0;
            for ( auto p:m )
            {
                if (p.second) n++;
            }
            m.clear();
            if ( n>10 ) break;
            else flag = false;
        }
        else continue;
        if ( flag ) cout << "NO" <<endl;
        else cout << "YES" <<endl;
        str.clear();
        t = ' ';
    }
    return 0;
}