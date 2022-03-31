#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

int main()
{
    string str;
    while ( cin>>str )
    {
        string str2 = str;
        for ( int i=0 ;i<str.length() ; i++ )
        {
            if ( str[i] >= 'A' && str[i] <= 'Z' )
            {
                str2[i] = 'Z' - abs(str[i] - 'A');
            }
            else if (str[i] >= 'a' && str[i] <= 'z')
            {

                str2[i] = 'z' - abs(str[i] - 'a');
            }
            else continue;
        }
        cout << str2 << endl;
    }
    return 0;
}