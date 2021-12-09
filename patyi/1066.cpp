#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,n,a,b,sub;
    cin >> m >> n >> a >> b >> sub;
    for ( int i=0 ; i<m ; i++ )
    {
        vector<int>line;
        for ( int j=0 ; j<n ; j++ )
        {
            int t;
            cin >> t;
            if ( t >= a && t <= b ) line.push_back(sub);
            else line.push_back(t);
        }
        for ( int k=0 ; k<n ; k++ )
        {
            printf("%03d",line[k]);
            if ( k!=n-1 ) cout << " ";
        }
        cout << endl;
    }    
    
    return 0;
}