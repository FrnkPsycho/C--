#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long

int main()
{
    ll n;
    char str[100001];

    while (scanf("%s",&str)!=EOF)
    {
        int len = strlen(str);
        int flag = 0;
        while ( !flag )
        {
            flag = 1;
            for ( int i=0 ; i<len-1 ; i++ )
            {
                for ( int j=i+1 ; j<len ; j++ )
                {
                    if ( str[j] != '\0' )
                    {
                        if (str[i] == str[j])
                        {
                            flag = 0;
                            str[i] = '\0';
                            str[j] = '\0';
                            i=j;
                            break;
                        }
                        else
                        {
                            i=j-1;
                            break;
                        }
                    }
                }
            }
        }
        for ( int i=0 ; i<len ; i++ )
        {
            if ( str[i] != '\0') printf("%c",str[i]);
        }
        printf("\n");
    }
    return 0;
}