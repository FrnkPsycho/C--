#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long

int main()
{
    // char vis[1001][1001];
    int t;
    while (scanf("%d",&t)!=EOF)
    {
        while ( t-- )
        {
            char str[1001] = {'\0'};
            char min[1001] = {'\0'};
            scanf("%s",&str);
            strcpy(min,str);
            for ( int i=0 ;i<strlen(str) ; i++ )
            {
                int back = i;
                char newfront[1001] = {'\0'};
                char newback[1001] = {'\0'};
                int head=0,tail=i;
                for ( int j=0; tail<strlen(str) ; j++,tail++ )
                {
                    newfront[j] = str[tail];
                }
                for ( int j=0 ; head < back ; j++,head++)
                {
                    newback[j] = str[head];
                }
                strcat(newfront,newback);
                if ( strcmp(newfront,min) < 0 ) strcpy(min,newfront);
            }
            printf("%s\n",min);
        }
    }
    
    return 0;
}