#include <stdio.h>
#include <stdlib.h>
#define ll long long

int beauty[200];

int cmp(const void * a, const void * b )
{
    return *(int *)b - *(int *)a;
}

int main()
{
    ll n;
    int k=1;
    for ( int i=0 ; ; i+=2 )
    {
        if ( 3*k % 15 == 0 || 5*k % 15 == 0 ) 
        {
            k++;
            continue;
        }
        beauty[i] = 3*k;
        beauty[i+1] = 5*k;
        k++;
        if ( k*2 >= 100000 ) break;
    }
    qsort(beauty, 2000000,sizeof(beauty[0]),cmp);
    // while (scanf("%lld", &n) != EOF)
    // {
        
    // }
    return 0;
}