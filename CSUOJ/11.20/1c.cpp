#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    while ( cin >> str )
    {
        string rev = str;
        reverse(rev.begin(),rev.end());
        int alphabet[27]={0};
        if ( rev == str )
        {
            for ( int i=0 ; i<str.length() ; i++ )
            {
                alphabet[str[i]-'a'] ++;
            }
            int k=0;
            for ( int i=0 ; i<27 ; i++ )
            {
                if ( alphabet[i] != 0 ) k++;
            }
            cout << "YES " << k << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}