#include <bits/stdc++.h>
#define MAX 100005
using namespace std;

int arr1[MAX];
int arr2[MAX];
int arr3[MAX];

int main()
{
    int n,m,q;
    map<long long,int>num;
    
    while ( cin >> n >> m >> q )
    {
        for (int i = 0; i < n+m+q; i++)
        {
            long long t;
            cin >> t;
            num[t]++;
        }
        for (auto& p : num)
        {
            if (p.second >= 3)
            {
                cout << p.first << " ";
            }
        }
        cout << endl;
        num.clear();
    }
    return 0;
}