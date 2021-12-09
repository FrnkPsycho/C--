#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long

int n,a[10],vis[10];

void dfs(int step)
{
    if ( step == n+1 )
    {
        for ( int i=1 ; i<=n ; i++ )
        {
            printf("%d",a[i]);
            if ( i!=n ) printf(" ");
        }
        printf("\n");
        return;
    }
    
    for ( int i=n ; i>=1 ; i-- )
    {
        if ( vis[i] == 0 )
        {
            vis[i] = 1;
            a[step] = i;
            dfs(step+1);
            vis[i] = 0;
        }
    }
    return;
}

int main()
{
    while ( scanf("%d",&n) != EOF )
    {
        dfs(1);
    }
    return 0;
}