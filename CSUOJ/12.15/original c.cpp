#include <bits/stdc++.h>
#define MAX 100
using namespace std;


int m[MAX];
int sums[MAX];

int main()
{
    int n,t;
    while ( cin >> n >> t )
    {
        int sum=0;
        for ( int i=1 ; i<=n ; i++ )
        {
            int temp;
            cin >> temp;
            m[i] = temp;
            sums[i] = sum;
            sum+=temp;
        }
        for ( int i=0 ; i<t ; i++ )
        {
            int l,r;
            cin >> l >> r;
            cout << sums[r+1] - sums[l+1] << endl;
        }
    }
    return 0;
}