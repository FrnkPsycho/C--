#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long
#define MAX 100

int h[MAX];

int main()
{
    int n;
    int cnt=0;
    while ( scanf("%d",&n) != EOF )
    {
        h[cnt++] = n;
    }
    int cnt2=0;
    int maxblock = 0;
    int i = 0;
    for ( i=0 ; ; i++ )
    {
        if ( cnt2 == cnt ) break;
        int now=40000;
        int single = 0;
        for ( int j=0 ; j<cnt ; j++ )
        {
            if ( h[j] <= now && h[j] != 0 )
            {
                cnt2++;
                single++;
                now = h[j];
                h[j] = 0;
            }
        }
        if ( single > maxblock ) maxblock = single;
    }
    printf("%d\n%d\n",maxblock,i);
    return 0;
}