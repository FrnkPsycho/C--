#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long

int main()
{
    char s1[10001];
    char s2[10001];
    while ( gets(s1) != NULL )
    {
        gets(s2);
        int a[128] = {0};
        int s1len = strlen(s1);
        int s2len = strlen(s2);
        for ( int i=0 ; i<s2len ; i++ )
        {
            a[s2[i]] = 1;
        }
        for ( int i=0 ; i<s1len ; i++ )
        {
            if ( !a[s1[i]] ) printf("%c",s1[i]);
        }
        printf("\n");
        memset(s1,'\0',sizeof(char)*10001);
        memset(s2,'\0',sizeof(char)*10001);
    }
    return 0;
}