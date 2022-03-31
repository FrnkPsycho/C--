#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    vector<double>ropes;
    cin >> n;
    for ( int i=0 ; i<n ; i++ )
    {
        double t;
        cin >> t;
        ropes.push_back(t/2.0);
    }
    sort(ropes.begin(),ropes.end());
    double length=ropes[0];
    for ( int i=1 ; i<n ; i++ )
    {
        if ( i==n-1 ) length = length+ropes[i];
        else length = (length+ropes[i])/2;
    }
    cout << (int)length << endl;
    return 0;
}