#include <bits/stdc++.h>
#include <ctime>

using namespace std;

int main()
{
    int i,j,t,n;
    vector<int>num;
    num.push_back(1);
    int digit=1;
    while ( scanf("%d",&n) != EOF )
    {
        for ( i=1 ; i<=n ; i++ )
    {
        int carry=0;
        for ( j=0 ; j<digit ; j++ )
        {
            num[j] = num[j] * i + carry;
            carry = num[j] / 10;
            num[j] = num[j] % 10;
        }

        if ( carry > 0 )
        {
            digit++;
            num.push_back(carry);
        }
    }
    int cnt=0;
    for ( int p=0 ;  ; p++ )
    {
        if ( num[p] == 0 ) cnt++;
        else break;
    } 
    cout << cnt;
    }
    
    return 0;
}