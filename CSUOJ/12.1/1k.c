#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long

int main()
{
    int a=0;
    int b=0;
    for ( int m=1 ; m<=1000 ; m++ )
    {
        int one = 0;
        int zero = 0;
        int i = m;
        int k=0;    
        int arr[100] = {0};
        while ( i != 0 )
        {
            arr[k++] = i % 2;
            i/=2;
        }
        for ( int j=0 ; j<k ; j++ )
        {
            if ( arr[j] == 0 ) zero++;
            else if ( arr[j] == 1 ) one++;
        }
        if ( one > zero ) a++;
        else b++;
    }
    printf("%d %d",a,b);
    return 0;
}