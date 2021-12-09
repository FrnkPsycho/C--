#include <stdio.h>
#define ll long long

int main()
{
    ll n;
    while ( scanf("%lld",&n) != EOF )
    {
        ll money=0;
        for ( int i=0 ; i<n ; i++ )
        {
            int s;
            scanf("%d",&s);
            if ( s < 60 ) money += 200;
        }
        printf("%lld\n",money);
    }
    return 0;
}