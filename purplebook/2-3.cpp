#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int k=t*2-1;
    int s=0;
    for ( int i=0 ; i<t ; i++ )
    {
        for ( int j=0 ; j<s ; j++ ) cout << " ";
        for ( int j=0 ; j<k ; j++ )
        {
            cout<<"#";
        }
        for (int j = 0; j<s; j++) cout << " ";
        s+=1;
        k-=2;
        cout << endl;
    }
    return 0;
}