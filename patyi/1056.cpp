#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int sum=0;
    cin >> n;
    vector<int>num;
    for ( int i=0 ; i<n ; i++ )
    {
        int t;
        cin >> t ;
        num.push_back(t);
    }
    for ( int i=0 ; i<n-1 ; i++ )
    {
        for ( int j=i+1 ; j<n ; j++ )
        {
            int a = num[i];
            int b = num[j];
            sum += a*10 + b;
            sum += b*10 + a;
        }
    }
    cout << sum << endl;
    return 0;
}