#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long

int main()
{
    int t;
    while (scanf("%d",&t) != EOF)
    {
        while ( t-- )
        {
            int n;
            int pos=0;
            scanf("%d",&n);
            int move[105];
            memset(move,0,sizeof(int)*105);
            int j=0;
            for ( int i=1 ; i<=n ; i++ )
            {
                char str[9]={'\0'};
                scanf("%s",str);
                if ( str[0] == 'L')
                {
                    move[i] = -1;
                }
                else if ( str[0] == 'R' )
                {
                    move[i] = 1;
                }
                else
                {
                    char temp[9];
                    int k;
                    scanf("%s %d",&temp,&k);
                    move[i] = move[k];
                }
                pos+=move[i];
            }

            // for ( int i=1 ; i<=n ; i++ )
            // {
            //     pos += move[i];
            // }
            printf("%d\n",pos);
        }
    }
    return 0;
}