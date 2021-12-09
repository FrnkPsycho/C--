#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long

int map[14][14];
int n;
int cnt;

void dfs(int x,int y,int step)
{
    if ( x >= n || y >= n || step == n )
    {
        cnt++;
        return;
    }

    for ( int j=0 ; j<n ; j++ )
    {
        
    }
}

int check(int x, int y)
{
    for ( int k=0 ; k<n ; k++ )
    {
        if ( map[k][y] == 1 ) return 0;
        if ( )
    }
}

int main()
{
    scanf("%d",&n);
    
    return 0;
}