#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long

char map[10][10];
// int visx[10];
int visy[10];
int n,k;
int cnt;

void dfs(int x,int step)
{
    if ( step == k )
    {
        cnt++;
        return;
    }
    if ( x >= n ) return;
    for ( int i=0 ; i<n ; i++ )
    {
        if ( map[x][i] == '#' && visy[i] == 0 )
        {
            visy[i] = 1;
            dfs(x+1,step+1);
            visy[i] = 0;
        }
            // if ( map[i][j] == '#' && visx[i] == 0 && visy[i] == 0 )
            // {

            //     visx[i] = 1;
            //     visy[j] = 1;
            //     dfs(i,j,step+1);
            //     visx[i] = 0;
            //     visy[j] = 0;
            // }
    }
    dfs(x+1,step);
}   

int main()
{
    while ( ~scanf("%d %d",&n,&k) )
    {
        cnt = 0;
        memset(visy,0,sizeof(visy));
        memset(map,'\0',sizeof(map));
        for ( int i=0 ; i<n ; i++ )
        {
            scanf("%s",&map[i]);
        }

        dfs(0,0);

        printf("%d\n",cnt);
    }
    return 0;
}