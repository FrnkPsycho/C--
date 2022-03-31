#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    vector<int>fac;
    cin >> n;
    for ( int i=1 ; i<=n ; i++ )
    {
        int sum=0;
        for ( int k=1 ; k<i ; k++ )
        {
            if ( i % k == 0 )
            {
                sum += k;
                fac.push_back(k);
            }   
        }
        if ( sum == i )
        {
            cout << i << " its factors are ";
            for ( auto p:fac )
            {
                cout << p << " ";
            }
            cout << endl;
        }
        fac.clear();
    }
    return 0;
}