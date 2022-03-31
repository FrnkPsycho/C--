#include <bits/stdc++.h>
#define MAX 100005

using namespace std;

vector<int> arr1;
vector<int> arr2;
vector<int> arr3;

int main()
{
    int n,m,q;
    map<long long,int>num;
    
    while ( cin >> n >> m >> q )
    {
        for (int i = 0; i < n; i++)
        {
            long long t;
            cin >> t;
            arr1.push_back(t);
        }
        for (int i = 0; i < m; i++)
        {
            long long t;
            cin >> t;
            arr2.push_back(t);
        }
        for (int i = 0; i < q; i++)
        {
            long long t;
            cin >> t;
            arr3.push_back(t);
        }
        vector<long long>res;
        vector<long long>temp;
        set_intersection(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), back_inserter(temp));
        set_intersection(temp.begin(), temp.end(), arr3.begin(), arr3.end(), back_inserter(res));

        for (int i=0 ; i<res.size() ; i++ )
        {
            cout << res[i] <<" ";
        }
        // {
        //     if (p.second >= 3)
        //     {
        //         cout << p.first << " ";
        //     }
        // }
        cout << endl;
        arr1.clear();
        arr2.clear();
        arr3.clear();
        temp.clear();
    }
    return 0;
}