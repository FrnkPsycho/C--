#include <bits/stdc++.h>

using namespace std;

int toi(string s,int radix)
{
    int res=0;
    for ( int i=0 ;i<s.length() ; i++ )
    {
        if( s[i] >= '0' && s[i] <= '9' ) res = res*radix + s[i]-'0';
        else res = res*radix + s[i]-'a' +10;
    }
    return res;
}

int rev(int num)
{
    string s = to_string(num);
    reverse(s.begin(),s.end());
    return stoi(s); 
}

bool palin(string s)
{
    string r = s;
    reverse(r.begin(),r.end());
    if ( r == s ) return true;
    else return false;
}

int main()
{
    int n;
    string m;
    while ( cin >> n >> m )
    {
        int step=0;
        while ( 1 )
        {
            step++;
            int a = toi(m, n);
            int b = rev(a);
            char r[100] = {'\0'};
            itoa(a + b, r, n);
            string res(r);
            if ( palin(res) ) break;
            else
            {
                m = res;
            }
        }
        printf("STEP=%d\n",step);
    }
    return 0;
}