#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long
#define MAX 100

int time[MAX];
int presum[MAX];

int main()
{
    int n,m;
    while ( ~scanf("%d %d",&n,&m) )
    {
        int sumtime=0;
        int t=0;
        for ( int i=1 ; i<=n ; i++ )
        {
            scanf("%d",&time[i]);
            t+=time[i];
            presum[i]=t;
            sumtime+=time[i];
        }
        while ( m-- )
        {
            int start,end;
            scanf("%d %d",&start,&end);
            int atime=0;
            int btime=0;
            if ( start > end )
            {
                int t = end;
                end = start;
                start = t;
            }
            atime = presum[end - 1] - presum[start - 1];
            btime = sumtime - atime;
            int res = atime < btime ? atime : btime;
            printf("%d\n", res);
        }
    }
    return 0;
}