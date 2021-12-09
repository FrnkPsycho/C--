#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long
#define MAX 1000001

// char str[MAX];
int ch[MAX];
int cnt[MAX];

int main()
{
    int n,m;
    while ( scanf("%d %d",&n,&m) != EOF )
    {
        getchar();
        for ( int i=0 ;i<n ; i++ )
        {
            char temp;
            scanf("%c",&temp);
            
        }
        // memset(str,'\0',sizeof(char)*MAX);
        // scanf("%s",&str);
        // for ( int k=0 ; k<m ; k++ )
        // {
        //     int i;
        //     int sum=0;
        //     scanf("%d",&i);
        //     i--;
        //     char ch = str[i];
        //     for ( int j=0 ; j<=i ; j++ )
        //     {
        //         if ( str[j] == ch ) sum++;
        //     }
        //     printf("%d\n",sum);
        // }
    }
    return 0;
}