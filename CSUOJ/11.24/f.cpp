#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    while ( cin >> str )
    {
        vector<int>csu(3);
        for ( int i=0 ; i<str.length() ; i++ )
        {
            if ( str[i] == 'C' ) csu[0]++;
            else if (str[i] == 'S')
                csu[1]++;
            else if (str[i] == 'U')
                csu[2]++;
        }
        sort(csu.begin(),csu.end());
        cout << csu[0] << endl;
    }
    return 0;
}