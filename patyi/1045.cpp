#include <bits/stdc++.h>

using namespace std;


int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    int i,j,k,t,n;
    bool flag = false;
    vector<int>num;
    vector<int>pri;
    cin >> n;
    getchar();
    while ( n-- )
    {
        cin >> t;
        num.push_back(t);
    }
    int num_size = num.size();
    for ( i=0 ; i<num_size ; i++ )
    {
        flag = false;
        j=i-1,k=i+1;
        while ( j >= 0 )
        {
            if ( num[j] > num[i] )
            {
                flag = true;
                break;
            }
            j--;

        }
        while ( k < num_size )
        {
            if ( num[k] < num[i] )
            {
                flag = true;
                break;
            }
            k++;
        }
        if ( flag ) continue;
        else
        {
            pri.push_back(num[i]);
        }
    }
    
    int pri_size = pri.size();
    cout << pri_size << endl;

    sort(pri.begin(),pri.end());

    for ( i=0 ; i<pri_size ; i++ )
    {
        cout << pri[i];
        if ( i != pri_size -1 ) cout << " ";
    }
    cout << endl;
    return 0;
}