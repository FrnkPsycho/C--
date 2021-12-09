#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while ( n != 0 )
    {
        vector<int>price;
        vector<int>trys;
        map<int,bool>vis;
        int money;
        for ( int i=0 ; i<n ; i++ )
        {
            int t;
            cin >> t;
            price.push_back(t);
        }
        sort(price.begin(),price.end());
        int max = 0;
        int maxx = 0;
        trys.push_back(0);
        cin >> money;
        for ( int i=0 ; i<n ; i++ )
        {
            int b=trys.size();
            for ( int j=0 ; j<b ; j++ )
            {
                int v = trys[j] + price[i];
                if ( vis[v] == false && trys[j] <= money )
                {
                    trys.push_back(v);
                    vis[v] = true;
                    if ( v > maxx ) maxx = v;
                }
            }
        }
        cout << money - maxx << endl;
        cin >> n;
    }
    return 0;
}