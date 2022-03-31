#include <stdio.h>
#define MAX 100010
#define ll long long

ll m[MAX];
ll sums[MAX];

int main()
{
    ll n,t;
    while ( ~scanf("%lld %lld",&n,&t) )
    {
        ll sum=0;
        for ( int i=1 ; i<=n ; i++ )
        {
            ll temp;
            scanf("%lld", &sums[i]);
            // m[i] = temp;
            sums[i] += sums[i-1];
        }
        for ( int i=0 ; i<t ; i++ )
        {
            ll l,r;
            scanf("%lld %lld",&l,&r);
            // if ( r > n )
            // {
            //     printf("%d\n", sums[n] - sums[l - 1]);
            // }
            printf("%lld\n", sums[r] - sums[l-1]);
        }
    }
    return 0;
}