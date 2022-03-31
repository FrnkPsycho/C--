#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

int main()
{
    string str;
    while ( cin >> str )
    {
        string s = str;
        char max_char = 'a'-1;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        for ( int i=0 ; i<s.length() ; i++ )
        {
            if ( s[i] > max_char ) max_char = s[i];
        }
        for (int i = 0; i < str.length(); i++)
        {
            cout << str[i];
            if ( str[i] == max_char || str[i]+'a'-'A' == max_char ) cout << "(max)";
        }
        cout << endl;
    }
    return 0;
}