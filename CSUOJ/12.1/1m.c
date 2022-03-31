#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long

struct ballon
{
    char name[16];
    int quan;
};

int cmp(const void *a,const void *b)
{
    struct ballon *m = (struct ballon *)a;
    struct ballon *n = (struct ballon *)b;
    return m->quan < n->quan;
}

int main()
{
    int n;
    while ( scanf("%d",&n) != EOF )
    {
        if ( n==0 ) return 0;
        int i=0;
        struct ballon ballons[1000];
        memset(ballons,0,sizeof(struct ballon)*1000);
        while ( n-- )
        {
            char temp[16];
            scanf("%s",&temp);
            int flag = 0;
            for ( int j=0 ;j<i ; j++ )
            {
                if ( strcmp(temp,ballons[j].name)==0 ) 
                {
                    ballons[j].quan++;
                    flag = 1;
                    break;
                }
                if ( j==i-1 )
                {
                    strcpy(ballons[i].name, temp);
                    ballons[i++].quan++;
                    flag = 1;
                    break;
                }
            }
            if ( !flag )
            {
                strcpy(ballons[i].name, temp);
                ballons[i++].quan++;
            }
        }
        qsort(ballons,i,sizeof(ballons[0]),cmp);
        printf("%s\n",ballons[0].name);
    }

    return 0;
}