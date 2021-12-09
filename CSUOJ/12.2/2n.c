#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long

int cmp(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int main()
{
    int n;
    while ( scanf("%d",&n) != EOF )
    {
        int age[101];
        memset(age,0,sizeof(int)*101);
        for ( int i=0 ; i<n ; i++ )
        {
            int t;
            scanf("%d",&t);
            age[t]++;
        }
        for ( int i=1 ; i<=100 ; i++ )
        {
            for ( int j=0 ; j<age[i] ; j++ )
            {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
    return 0;
}