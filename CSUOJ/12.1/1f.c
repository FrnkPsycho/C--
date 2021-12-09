#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define ll long long

int main()
{
    int t;
    while ( scanf("%d",&t) != EOF )
    {
        while ( t-- )
        {
            int n;
            scanf("%d",&n);
            int sum=1;
            for ( int i=2 ; i<=sqrt(n) ; i++ )
            {
                if ( n % i == 0 )
                {
                    if ( i != n/i )
                    {
                        sum += i + n/i;
                    }
                    else sum += i;
                }
            }
            // if ( n == 1 ) printf("0\n");
            printf("%d\n",sum);
        }
    }
    return 0;
}