#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    int min = 99999999;
    vector<int>city;
    cin >> n;
    for ( int i=1 ; i<=n ; i++ )
    {
        int temp;
        cin >> temp;
        city.push_back(temp);
    }
    int flag = 0;
    for ( int i=0 ; i<n ; i++ )
    {
        if ( city[i] < min )
        {
            min = city[i];
            k = i+1;
            flag = 1;
        }
        else if ( city[i] == min )
        {
            flag = 0;
        }
    }
    if ( flag == 1 )
        cout << k << endl;
    else cout << "Fail" << endl;
    return 0;
}