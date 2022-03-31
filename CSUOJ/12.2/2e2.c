#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long

int n,cnt;
int map[15];

int check(int col)
{
    for ( int i=1; i<col ; i++ )
    {
        if ( map[i]==map[col] || abs(i-col) == abs(map[i]-map[col]) )
        {
            return 0;
        }
    }
    return 1;
}

void dfs(int col)
{
    if ( col == n+1 ) cnt++;
    for ( int i=1 ; i<=n ; i++ )
    {
        map[col] = i;
        if ( check(col) )
        {
            dfs(col+1);
        }
    }
}

int main()
{
    scanf("%d",&n);
    dfs(1);
    printf("%d\n",cnt);
    return 0;
}