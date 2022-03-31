#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long

int main()
{
    char s1[10001];
    char s2[10001];
    while ( scanf("%[^\n] %[^\n]",&s1,&s2) != EOF )
    {
        int s1len = strlen(s1);
        int s2len = strlen(s2);
        for ( int i=0 ; i<s2len ; i++ )
        {
            for ( int j=0 ; j<s1len ; j++ )
            {
                if ( s2[i] == s1[j] ) s1[j] = '\0';
            }
        }
        for ( int i=0 ; i<s1len ; i++ )
        {
            if ( s1[i] != '\0' ) printf("%c",s1[i]);
        }
        printf("\n");
        memset(s1,'\0',sizeof(char)*10001);
        memset(s2,'\0',sizeof(char)*10001);
        getchar();
    }
    return 0;
}