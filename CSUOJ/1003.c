#include <stdio.h>
#include <string.h>

int map[21][21];
int book[21][21];
int go[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};

int selfx,selfy,mx,my,sum;

void dfs(int x, int y)
{
    int nx,ny;

    sum++;
    book[x][y] = 1;
    for ( int i=0 ; i<4 ; i++ )
    {
        nx = x + go[i][0];
        ny = y + go[i][1];

        if ( nx > mx || nx < 1 || ny > my || ny < 1 )
        {
            continue;
        }
        else
        {
            if ( map[nx][ny] == 0 && book[nx][ny] == 0 )
            {
                dfs(nx,ny);
            }
        }
    }
    return;
}

int main()
{
    int i,j,t,n,x,y;
    char temp;
    while ( 1 )
    {
        scanf("%d %d",&mx,&my);
        sum = 0;
        if ( mx == 0 && my == 0 ) break;
        getchar();
        for ( int k=1 ; k<=mx ; k++ )
        {
            for ( int l=1 ; l<=my ; l++ )
            {
                scanf("%c",&temp); 
                   
                if ( temp == '.' ) map[k][l] = 0;
                else if ( temp == '#' ) map[k][l] = 1;
                else if ( temp == '@' )
                {
                    selfy = l;
                    selfx = k;
                }
            }
            getchar();
        }

        dfs(selfx,selfy);

        printf("%d\n",sum);
        memset(map,0,sizeof(int)*21*21);
        memset(book,0,sizeof(int)*21*21);
    }
    return 0;
}