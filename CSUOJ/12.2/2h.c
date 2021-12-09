#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long

int normalm[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int runm[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int getgcd(int a,int b)
{
    int t;
    while ( b!=0 )
    {
        t = a%b;
        a = b;
        b = t;
    }
    return a;
}


int main()
{
    int t;
    while ( ~scanf("%d",&t) )
    {
        for ( int k=1 ; k<=t ; k++ )
        {
            int gcd,lcm,y;
            scanf("%d %d %d",&gcd,&lcm,&y);
            int m,d;
            int fm,fd;
            int cnt=0;
            if ( y % 4 == 0  && ( y%100!=0 || y % 400 == 0))
            {
                for ( int m=1; m<=12 ; m++ )
                {
                    for ( int d=1;d<=runm[m] ; d++ )
                    {
                        if ( m*d == gcd * lcm && getgcd(m,d) == gcd )
                        {
                            cnt++;
                            if ( cnt > 1 ) goto end;
                            fm = m;
                            fd = d;
                        }
                    }
                }
            }
            else
            {
                for (int m = 1; m <= 12; m++)
                {
                    for (int d = 1; d <= normalm[m]; d++)
                    {
                        if (m * d == gcd * lcm && getgcd(m, d) == gcd)
                        {
                            cnt++;
                            if (cnt > 1) goto end;
                            fm = m;
                            fd = d;
                        }
                    }
                }
            }
            end:
            printf("Case #%d: ",k);
            if (cnt == 0) printf("-1\n");
            else if (cnt > 1) printf("1\n");
            else
            {
                printf("%d/%02d/%02d\n",y, fm, fd);
            }
        }
    }
    return 0;
}