#include <bits/stdc++.h>

using namespace std;
// 这道题的第3测试点很难 有待再研究
int main()
{
    int m,n,s;
    // vector<string>nickname;
    map<string,int>choose;
    cin >> m >> n >> s;
    if ( s > m )
    {
        cout << "Keep going..." << endl;
        return 0;
    }
    else
    {
        int p=s;
        for ( int i=1 ; i<=m ; i++ )
        {
            string str;
            cin >> str;
            if ( i==p && choose[str] == 0 )
            {
                cout << str << endl;
                choose[str] = 1;
                p+=n;
            }
            else if ( i==p && choose[str] == 1 )
            {
                p++;
            }
        }
    }
    return 0;
}