#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define ll long long
#define MAX 100005

ll mapp[1005][1005];
ll dp[1005][1005];

int main()
{
    int n,m;
    while ( ~scanf("%d %d",&n,&m) )
    {
        memset(mapp,0,sizeof(mapp));
        memset(dp,0,sizeof(dp));
        for ( int i=1 ; i<=n ; i++ )
        {
            for ( int j=1 ; j<=m ; j++ )
            {
                scanf("%lld",&mapp[i][j]);
            }
        }
        dp[1][1] = mapp[1][1];
        for ( int i=2 ; i<=n ; i++ )
        {
            dp[i][1] = dp[i-1][1] + mapp[i][1];
        }
        for ( int j=2 ; j<=m ; j++ )
        {
            dp[1][j] = dp[1][j-1] + mapp[1][j];
        }
        for (int i = 2; i <= n; i++)
        {
            for (int j = 2; j <= m; j++)
            {
                dp[i][j] = (dp[i-1][j] > dp[i][j-1]?dp[i-1][j]:dp[i][j-1]) + mapp[i][j];
            }
        }
        printf("%lld\n",dp[n][m]);
    }
    return 0;
}