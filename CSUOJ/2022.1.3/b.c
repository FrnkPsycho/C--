#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long

int main()
{
    ll n;
    while (~scanf("%d",&n) )
    {
        int mid = n+1;
        int upperspace = mid-1;
        int lowerspace = mid-2;
        while ( upperspace >= 1 )
        {
            for (int i = 0; i < upperspace; i++)
                printf(" ");
            printf("*\n");
            upperspace--;
        }
        for ( int i=0 ; i<mid ; i++ ) printf("*");
        printf("\n");
        while (lowerspace >= 0)
        {
            for (int i = 0; i < lowerspace; i++)
                printf(" ");
            printf("*\n");
            lowerspace--;
        }
        printf("\n");
    }
    return 0;
}