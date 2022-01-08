#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while ( cin >> n )
    {
        vector<long long> enemy;
        for (int i = 0; i < n; i++)
        {
            long long h;
            scanf("%lld",&h);
            enemy.push_back(h);
        }
        sort(enemy.begin(), enemy.end());
        long long k = (enemy[n-1] + 1) / 2;
        long long s=0;
        map<long long,bool>boom;

        for ( int i=0 ; i<n ; i++ )
        {
            boom[(enemy[i]+1)/2] = true;
        }
        cout << k-boom.size()+1 << endl; 
    }
    return 0;
}