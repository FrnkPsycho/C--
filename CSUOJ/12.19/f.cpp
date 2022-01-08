#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

int main()
{
    ll t;
    string str;
    while ( cin >> str )
    {
        bool nega = false;
        if ( str[0] == '-' )
        {
            nega = true;
            str.erase(0,1);
        } 

        string str2 = str;
        reverse(str2.begin(),str2.end());
        int s;
        for ( int i=str.length()-1 ; i>=0 ; i-- )
        {
            s = (str[i] - '0') + (str2[i] - '0');
            if ( s >= 10 && i!=0) 
            {
                str[i] = s%10+'0';
                str[i-1] = str[i-1]-'0' + s/10 +'0';
            }
            else if (s >= 10 && i == 0)
            {
                str[i] = s % 10 + '0';
                str = to_string(s/10) + str;
            }
            else
            {
                str[i] = s + '0';
            }
        }
        if ( nega ) cout << "-";
        cout << str << endl;
    }
    return 0;
}