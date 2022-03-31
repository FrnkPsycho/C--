#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long

int main()
{
    int t;
    scanf("%d",&t);
    while ( t-- )
    {
        int n;
        scanf("%d",&n);
        int sum=1;
        for ( int i=2 ; i<=n/2 ; i++ )
        {
            if ( n % i == 0 ) sum += i;
        }
        printf("%d\n",sum);
    }
    return 0;
}