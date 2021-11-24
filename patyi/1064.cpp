#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    vector<int>sums;
    vector<int>friends;
    cin >> n;
    while ( n-- )
    {
        string num;
        int sum=0;
        cin >> num;
        for ( int i=0 ; i<num.length() ; i++ )
        {
            int digit = num[i] - '0';
            sum+=digit;
        }
        sums.push_back(sum);
    }
    sort(sums.begin(),sums.end());
    sums.erase(unique(sums.begin(),sums.end()),sums.end());

    cout << sums.size() << endl;
    for ( int i=0 ; i<sums.size() ; i++ )
    {
        cout << sums[i];
        if ( i != sums.size()-1 ) cout << " ";
    }
    cout << endl;
    return 0;
}