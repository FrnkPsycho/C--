#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while ( scanf("%d",&n) != EOF )
    {
        if ( n==2 || n==0 ) cout << "NO" << endl;
        else if ( n % 2 == 0 ) cout<<"YES"<<endl;
        else cout << "NO" <<endl;

    }
    return 0;
}