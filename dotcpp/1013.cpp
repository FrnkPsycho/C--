#include <bits/stdc++.h>

using namespace std;

int main()
{
    int an=2,n;
    int k=1;
    int sum=2;
    cin >> n;
    for ( int i=1 ; i<n ; i++ )
    {
        k *= 10;
        an += 2 * k;
        sum += an;
    }
    cout << sum;
    return 0;
}