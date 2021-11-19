#include <bits/stdc++.h>

using namespace std;

bool cmp ( int &a,int &b )
{
    return a > b;
}

int main()
{
    int n;
    cin >> n;
    vector<int>days(1);
    for ( int i=0 ; i<n ; i++ )
    {
        int t;
        cin >> t;
        days.push_back(t);
    }
    sort(days.begin()+1,days.end()+1,cmp);
    int e=0,i=1;
    while ( e<=n && days[i] > i )
    {
        e++;i++;
    }
    
    cout << e << endl;
    return 0;
}