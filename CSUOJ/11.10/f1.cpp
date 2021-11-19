#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    string str = "1";

    for ( int i=2 ; i<=9999 ; i++ )
    {

        string temp = to_string(i);
        str = str + temp;
    }
    while ( cin >> t )
    {
        cout << str[t-1] << endl;
    }
    return 0;
}