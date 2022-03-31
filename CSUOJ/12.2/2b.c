#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long

char str[52];
// 

int ispalin()
{
    int len = strlen(str);
    for ( int i=0,j=len-1 ; i<len/2 ; i++,j--)
    {
        if ( str[i] != str[j] ) return 0;
    }
    return 1;
}

int ismirror()
{
    char newstr[52];
    strcpy(newstr,str);
    int len = strlen(newstr);
    if ( len == 1 )
    {
        if ( newstr[0] == 'E' ) return 1;
        else if ( newstr[0] == '3' ) return 1;
        else if ( newstr[0] == 'J' ) return 1;
        else if ( newstr[0] == 'L' ) return 1;
        else if ( newstr[0] == '2' ) return 1;
        else if ( newstr[0] == 'S' ) return 1;
        else if ( newstr[0] == '5' ) return 1;
        else if ( newstr[0] == 'Z' ) return 1;
    }
    for ( int i=0 ; i<len ; i++ )
    {
        if ( newstr[i] == 'B' ) return 0;
        else if ( newstr[i] == 'C' ) return 0;
        else if ( newstr[i] == 'D' ) return 0;
        else if ( newstr[i] == 'F' ) return 0;
        else if ( newstr[i] == 'G' ) return 0;
        else if ( newstr[i] == 'K' ) return 0;
        else if ( newstr[i] == 'N' ) return 0;
        else if ( newstr[i] == 'P' ) return 0;
        else if ( newstr[i] == 'Q' ) return 0;
        else if ( newstr[i] == 'R' ) return 0;
        else if ( newstr[i] == '4' ) return 0;
        else if ( newstr[i] == '6' ) return 0;
        else if ( newstr[i] == '7' ) return 0;
        else if ( newstr[i] == '9' ) return 0;
        
        if ( newstr[i] == 'E' ) newstr[i] = '3';
        else if ( newstr[i] == '3' ) newstr[i] = 'E';
        else if ( newstr[i] == 'J' ) newstr[i] = 'L';
        else if ( newstr[i] == 'L' ) newstr[i] = 'J';
        else if ( newstr[i] == '2' ) newstr[i] = 'S';
        else if ( newstr[i] == 'S' ) newstr[i] = '2';
        else if ( newstr[i] == '5' ) newstr[i] = 'Z';
        else if ( newstr[i] == 'Z' ) newstr[i] = '5';
        else continue;
    }
    for (int i = 0, j = len - 1; i < len / 2; i++, j--)
    {
        char temp;
        temp = newstr[j];
        newstr[j] = newstr[i];
        newstr[i] = temp;
    }
    if ( !strcmp(newstr,str) ) return 1;
    else return 0; 
}

int main()
{
    
    while ( scanf("%s",&str)!=EOF )
    {
        printf("%s",str);
        printf(" -- ");
        int p = ispalin();
        int m = ismirror();
        if ( p&&m ) printf("is a mirrored palindrome.\n");
        else if ( p ) printf("is a regular palindrome.\n");
        else if ( m ) printf("is a mirrored string.\n");
        else printf("is not a palindrome.\n");
        printf("\n");
        memset(str, '\0', sizeof(char) * 52);
    }
    return 0;
}