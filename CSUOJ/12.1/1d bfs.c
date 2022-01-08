#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long
#define MAX 1005

struct node
{
    int x;
    int y;
    int dist;
} que[MAX*MAX];

int n, m;
int head=0,tail=0;

char map[MAX][MAX];
int res[MAX][MAX];
int vis[MAX][MAX];
// int dir[8][2] = {
//     {-1, 0}, {1, 0}, {0, -1}, {0, 1}, {-1, -1}, {-1, 1}, {1, -1}, {1, 1}};

int dir[4][2] = {
    {-1, 0}, {1, 0}, {0, -1}, {0, 1}};

void bfs()
{
    while ( head < tail )
    {
        for ( int i=0 ; i<4 ; i++ )
        {
            int nx = que[head].x+dir[i][0];
            int ny = que[head].y+dir[i][1];
            if ( nx>=0 && ny>=0 && nx<n && ny<m && vis[nx][ny] == 0)
            {
                res[nx][ny] = que[head].dist+1;
                vis[nx][ny] = 1;
                que[tail].x = nx;
                que[tail].y = ny;
                que[tail].dist = que[head].dist + 1;
                tail++;
            }
        }
        head++;
    }
}

int main()
{
    while (~scanf("%d %d", &n, &m) )
    {
        head = 0;
        tail = 0;
        memset(vis,0,sizeof(vis));
        memset(res,0,sizeof(res));
        memset(map,'\0',sizeof(map));
        for (int i = 0; i < n; i++)
        {
            scanf("%s", &map[i]);
            for ( int j=0 ; j<m ; j++ )
            {
                if ( map[i][j] == '0' )
                {
                    res[i][j] = 0;
                    vis[i][j] = 1;
                    que[tail].x = i;
                    que[tail].y = j;
                    que[tail].dist = 0;
                    tail++;
                }
            }
        }
        bfs();

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                printf("%d ",res[i][j]);
            }
            printf("\n");
        }
        
    }
    return 0;
}