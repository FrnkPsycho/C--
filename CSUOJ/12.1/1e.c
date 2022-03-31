#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long

int normalm[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int runm[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
    int n;
    while ( scanf("%d",&n) != EOF )
    {
        int cnt[8] = {0};
        int days = 13;
        for ( int i=1900 ; i<1900+n ; i++ )
        {
            if (i % 4 == 0 && (i % 100 != 0 || i % 400 == 0))
            {
                for (int m = 1; m <= 12; m++)
                {
                    cnt[days%7]++;
                    days += runm[m];
                }
            }
            else
            {
                for ( int m=1 ; m<=12 ; m++)
                {
                    cnt[days % 7]++; // 注意数组索引0是周日
                    days+=normalm[m];
                }

            }
        }
        printf("%d %d",cnt[6],cnt[0]);
        for ( int i=1 ; i<=5 ; i++ )
        {
            printf(" %d",cnt[i]);
        }
        printf("\n");
    }

    return 0;
}