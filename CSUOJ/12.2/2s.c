#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long

int main()
{
    char num[20];
    while ( scanf("%s",&num) != EOF )
    {
        if ( num[0] == '-' )
        {
            for ( int i=1,j=strlen(num)-1 ; i<strlen(num)/2+1 ; i++,j--)
            {
                char t = num[j];
                num[j] = num[i];
                num[i] = t;
            }
            printf("-");
            int flag=0;
            for ( int i=1 ; i<strlen(num) ; i++ )
            {
                if ( !flag && num[i] == '0' ) continue;
                else
                {
                    flag = 1;
                    printf("%c",num[i]);
                }
            }
            printf("\n");
        }
        else
        {
            for ( int i=0,j=strlen(num)-1 ; i<strlen(num)/2 ; i++,j-- )
            {
                char t = num[j];
                num[j] = num[i];
                num[i] = t;
            }
            int flag = 0;
            for (int i = 0; i < strlen(num); i++)
            {
                if (!flag && num[i] == '0')
                    continue;
                else
                {
                    flag = 1;
                    printf("%c", num[i]);
                }
            }
            printf("\n");
        }
    }
    return 0;
}