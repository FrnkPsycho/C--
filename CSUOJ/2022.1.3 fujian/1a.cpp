#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

int main()
{
    int n,m;
    while ( cin >> n >> m )
    {
        if ( n==0 && m==0) break;
        int p,r;
        if ( (m-2*n) % 2 == 0 ) 
        {
            r = (m - 2 * n) / 2;
            p = n - r;
            cout << p << " " << r << endl;
        }
        else cout << "Error" << endl;
    }
    
    return 0;
}