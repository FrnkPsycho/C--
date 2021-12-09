#include <stdio.h>
#include <stdlib.h>
#define ll long long

int beauty[100025];

int main()
{
    ll n;
    int k = 0;
    for (int i = 1; k <= 100020; i++)
    {
        if ( i % 3 == 0 || i % 5 == 0 )
        {
            beauty[k++] = i;
        }
    }

    while ( scanf("%lld",&n) != EOF )
    {
        printf("%d\n",beauty[n-1]);
    }
    return 0;
}