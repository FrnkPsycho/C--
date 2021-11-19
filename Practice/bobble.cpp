#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>num;
    for ( int i=0 ; i<10 ; i++ )
    {
        int temp;
        cin >> temp;
        num.push_back(temp);
    }
    
    for ( int s=0 ; s<num.size()-1 ; s++ )
    {
        for ( int i=0 ; i<num.size()-1 ; i++ )
        {
            if ( num[i] > num[i+1] )
            {
                int temp = num[i+1];
                num[i+1] = num[i];
                num[i] = temp;
            }
        }
    }

    for ( auto p : num )
    {
        cout << p << " ";
    }
    return 0;
}