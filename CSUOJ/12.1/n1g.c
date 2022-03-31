#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long
#define MAX 60000

int num[MAX];

int main()
{
    int t;
    while ( scanf("%d",&t) != EOF )
    {
        while (t--)
        {
            int n,k;
            int max = 0;
            scanf("%d %d",&n,&k);
            for ( int i=0 ; i<n ; i++ )
            {
                int temp;
                scanf("%d",&temp);
                num[temp]++;
                if ( temp > max ) max = temp;
            }
            for ( int h=1;;)
            {
                int cnt=0;
                int flag = 0;
                for ( int i=h ; i<=max+1 ; i++ )
                {
                    if (cnt == k)
                    {
                        flag = 1;
                        break;
                    }
                    else if ( num[i] > 0 )
                    {
                        cnt++;
                        num[i]--;
                    } 
                    
                }
                while ( num[h] == 0 && h<=max ) h++;
                if ( flag != 1) break;
            }

            int flag = 0;
            for ( int i=1 ; i<=max ; i++ )
            {
                if ( num[i] > 0 ) 
                {
                    flag=1;
                    break;
                }
            }
            if ( flag ) printf("NO\n");
            else printf("YES\n");
        }
    }
    return 0;
}