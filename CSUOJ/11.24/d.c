#include <stdio.h>

int main()
{
    int n;
    while ( scanf("%d",&n) != EOF )
    {
        if ( n==2 || n==0 ) printf("NO\n");
        else if ( n % 2 == 0 ) printf("YES\n");
        else printf("NO\n");

    }
    return 0;
}