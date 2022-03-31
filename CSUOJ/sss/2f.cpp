#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while ( cin >> n )
    {
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            arr.push_back(t);
        }
        if ( n % 2 == 0 )
        {
            cout << "No" << endl;
        }
        else
        {
            if ( arr[0] % 2 != 0 && arr[n-1] % 2 != 0 )
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
    
    return 0;
}