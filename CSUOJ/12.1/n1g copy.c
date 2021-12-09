#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long
#define MAX 500005

int num[MAX];

int main()
{
    int t;
    while ( scanf("%d",&t) != EOF )
    {
        while (t--)
        {
            // memset(num,0,sizeof(int)*MAX);
            int n,k;
            int max = 0;
            scanf("%d %d",&n,&k);
            for ( int i=0 ; i<n ; i++ )
            {
                int temp;
                scanf("%d",&temp);
                num[temp]++;
                max = temp;
            }
            if (n % k != 0)
            {
                printf("NO\n");
            }
            else
            {
                int p=0;
                for ( int h=1;;)
                {
                    int cnt=0;
                    int flag = 0;
                    for ( int i=h ; i<=max ; i++ )
                    {
                        if ( num[i] > 0 )
                        {
                            cnt++;
                            num[i]--;
                        }

                        if (cnt == k)
                        {
                            flag = 1;
                            p++;
                            break;
                        }
                    }
                    while ( num[h] == 0 && h<=max+1 ) h++;
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
                if ( p != n/k ) flag = 1;
                if ( flag ) printf("NO\n");
                else printf("YES\n");

            }
        }
    }
    return 0;
}