#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,t,n;
    vector<int>num;
    cin >> t;
    while ( t-- )
    {
        cin >> n;
        num.push_back(n); 
    }
    sort(num.begin(),num.end());
    for ( auto p : num )
    {
        cout << p << " ";
    }
    return 0;
}