#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include <math.h>
#define ll long long

int prime[5005];
int fake[5005];
int main()
{
    for ( int i=0 ; i<=5004 ; i++ ) prime[i] = 1;
    int boundary = 5001;
    prime[1] = 0;
    prime[0] = 0;
    for (int i = 4; i < boundary; i++)
    {
        if (prime[i] == 0)
            continue;
        for (int j = 2; j <= i-1; j++)
        {
            if (i % j == 0)
            {
                prime[i] = 0;
                break;
            }
            else if (j == i-1)
            {
                for (int k = 2; k * i <= boundary; k++)
                {
                    prime[k * i] = 0;
                }
            }
        }
    }
    int k=0;
    for ( int i=1 ; i<=48619 ; i++ )
    {
        if ( prime[i] == 1 ) fake[k++] = i;
        else
        {
            int temp = i;
            int flag=0;
            while ( temp != 0 )
            {
                int m = temp%10;
                if ( m!=2&&m!=3&&m!=5&&m!=7 )
                {
                    flag=1;
                    break;
                }
                temp /= 10;
            }
            if (!flag) fake[k++] = i;
        }
        if ( k>5000 ) break;
    }
    while ( ~scanf("%d",&k) )
    {
        printf("%d\n",fake[k-1]);
    }
    return 0;
}