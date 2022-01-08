#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

int toii(string st)
{
    while (st[0] == '0'&&st.length()!=1)
    {
        st.erase(0, 1);
    }
    int k=0;
    for ( int i=0 ;i<st.length() ; i++ )
    {
        k *= 10;
        k+=st[i]-'0';
    }
    return k;
}

int main()
{
    string s;
    while ( cin >> s )
    {
        vector<string>sub;
        vector<int>num;
        int i=0;
        int j=0;
        for ( i=0 ; i<s.length() ; i++ )
        {
            if ( s[i] == '5' ) continue;
            for ( j=i; j<s.length() ; j++ )
            {
                if (j == s.length() - 1 && s[j] != '5')
                {
                    string t = s.substr(i, j - i + 1);
                    sub.push_back(t);
                    i = j;
                    break;
                }
                if ( s[j] == '5' )
                {
                    string t = s.substr(i, j - i);
                    sub.push_back(t);
                    i = j;
                    break;
                    
                }
            }
        }
        for ( int i=0 ; i<sub.size() ; i++ )
        {
            int t;
            t = toii(sub[i]);
            num.push_back(t);
        }
        sort(num.begin(),num.end());
        for ( auto p:num )
        {
            cout << p << " ";
        }
        cout << endl;
    }
    return 0;
}