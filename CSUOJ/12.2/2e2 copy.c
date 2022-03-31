#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long

int n,cnt;
int map[14];

int check(int ln)
{
    for ( int i=1; i<ln ; i++ )
    {
        if ( map[i]==map[ln] || abs(i-ln) == abs(map[i]-map[ln]) )
        {
            return 0;
        }
    }
    return 1;
}

void dfs(int ln)
{
    if ( ln == n+1 ) cnt++;
    for ( int i=1 ; i<=n ; i++ )
    {
        map[ln] = i;
        if ( check(ln) )
        {
            dfs(ln+1);
        }
    }
}

int main()
{
//     while ( ~scanf("%d",&n) )
//     {
//         dfs(1);
//         printf("%d\n",cnt);
//     }

    cnt = 0;
    memset(map, 0, sizeof(map));
    scanf("%d",&n);
    dfs(1);
    printf("%d\n",cnt);
    return 0;
}