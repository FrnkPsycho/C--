#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long

int main()
{
    int n;
    char ch;
    while ( scanf("%d %c",&n,&ch) != EOF )
    {
        int space=0;
        int layers=1;
        int q=1;
        int remain;
        int p=3;
        for ( p; ; p+=2 )
        {
            if ( q + p*2 > n ) break;
            else
            {
                layers++;
                q += p * 2;
            } 
        }
        p-=2;
        remain = n-q;
        for ( int i=0 ; i<layers ; i++ )
        {
            for ( int j=0 ; j<space ; j++ ) printf(" ");
            for ( int k=0 ; k<p ; k++ ) printf("%c",ch);
            p-=2;
            space++;
            printf("\n");
        }
        p+=4;
        space-=2;
        for ( int i=0 ; i<layers-1 ; i++ )
        {
            for ( int j=0 ; j<space ; j++ ) printf(" ");
            for ( int k=0 ; k<p ; k++ ) printf("%c",ch);
            p+=2;
            space--;
            printf("\n");
        }
        printf("%d\n",remain);
    }

    return 0;
}