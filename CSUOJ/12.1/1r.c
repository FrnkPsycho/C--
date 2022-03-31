#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long
#define MAX 105

int n,m;
char map[MAX][MAX];
int dir[8][2] = {
    {-1,0},{1,0},{0,-1},{0,1},
    {-1,-1},{-1,1},{1,-1},{1,1}
};

void dfs(int x,int y)
{
    map[x][y] = '*';
    for ( int i=0 ; i<8 ; i++ )
    {
        int nx = x+dir[i][0];
        int ny = y+dir[i][1];
        if ( nx>=0&&ny>=0&&nx<n&&ny<m&&map[nx][ny]=='@')
        {
            dfs(nx,ny);

            // // debug
            // for (int i = 1; i <= n; i++)
            // {
            //     for (int j = 1; j <= m; j++)
            //     {
            //         printf("%c", map[i][j]);
            //     }
            //     printf("\n");
            // }
            // printf("\n");
        }
    }
}

int main()
{
    while ( ~scanf("%d %d",&n,&m) && n && m )
    {
        getchar();
        for ( int i=0 ; i<n ; i++ )
        {
            scanf("%s",&map[i]);
        }
        int cnt=0;

        for ( int i=0 ; i<n ; i++ )
        {
            for ( int j=0 ; j<m ; j++ )
            {
                if ( map[i][j] == '@')
                {
                    cnt++;
                    dfs(i,j);
                }
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}