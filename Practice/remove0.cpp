#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;
    while ( str[0] == '0')
    {
        str.erase(0,1);
    }
    cout << str;
    return 0;
}