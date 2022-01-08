#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

int main()
{
    int n,m;
    while ( cin >> n >> m )
    {
        if ( n==0 && m==0 ) break;
        vector<int>num;
        for ( int i=0 ; i<n ; i++ )
        {
            int t;
            cin >> t;
            num.push_back(t);
        }
        num.push_back(m);
        sort(num.begin(),num.end());
        for ( auto p:num )
        {
            cout << p << " ";
        }
        cout << endl;
    }
    
    return 0;
}