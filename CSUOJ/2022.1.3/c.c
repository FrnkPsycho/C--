#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long

int main()
{
    ll n;
    char str[35] = {'\0'};
    int map[260] = {0};
    while ( ~scanf("%s",&str) )
    {
        memset(map,0,sizeof(map));
        int validlen = 1;
        int pass = 0;
        if ( strlen(str) < 8 ) validlen = 0;
        else
        {
            for (int i = 0; i < strlen(str); i++)
            {
                if (str[i]<='9' && str[i] >= '0')
                {
                    pass++;
                    break;
                }
            }
            for (int i = 0; i < strlen(str); i++)
            {
                if (str[i] >= 'a' && str[i] <= 'z')
                {
                    pass++;
                    break;
                }
            }
            for (int i = 0; i < strlen(str); i++)
            {
                if (str[i] >= 'A' && str[i] <= 'Z')
                {
                    pass++;
                    break;
                }
            }
            // int sppass = 0;
            for ( int i=0 ; i<strlen(str) ; i++ )
            {
                if (str[i] == '!' || str[i] == '@' || str[i] == '#' || str[i] == '$' || str[i] == '*' || str[i] == '~')
                {
                    pass++;
                    break;
                }
            }
            // if ( sppass ) pass++;
        }
        if ( pass >= 3 && validlen == 1 ) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}