#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long

int main()
{
    int a,b,c,d;
    for ( int i=10 ; i<13 ; i++ )
    {
        a = 809*i+1;
        b = 8*i;
        c = 9*i+1;
        d = 9*i;
        if ( a >=1000 && b<100 && c>=100 && d>=100 )
        {
            printf("%d\n%d\n%d\n%d\n%d\n",i,a,b,c,d);
            break;
        }
    }
    return 0;
}