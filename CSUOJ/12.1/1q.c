#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long
#define MAX_SPELL 200

int vis[MAX_SPELL];
int cnt;
int flag;

int spell[MAX_SPELL][MAX_SPELL];

void dfs(char lasttail)
{
    if ( lasttail == 'm' )
    {
        flag = 1;
        return;
    }
    if ( flag ) return;
    char tail;
    for ( int i=1 ;i<=spell[lasttail][0] ; i++ )
    {
        if ( vis[spell[lasttail][i]] == 0 )
        {
            vis[lasttail] = 1;
            dfs(spell[lasttail][i]);
        }
    }
}

int main()
{
    char temp[16] = {'\0'};
    while ( scanf("%s",&temp) != EOF )
    {
        flag = 0;
        if ( temp[0] == '0' ) continue;
        memset(spell,0,sizeof(spell));
        memset(vis,0,sizeof(vis));
        spell[temp[0]][0]++;
        spell[temp[0]][spell[temp[0]][0]] = temp[strlen(temp) - 1];
        while (scanf("%s", &temp) != EOF && temp[0] != '0')
        {
            spell[temp[0]][0]++;
            spell[temp[0]][spell[temp[0]][0]] = temp[strlen(temp) - 1];
        }

        dfs('b');
        
        if ( flag ) printf("Yes.\n");
        else printf("No.\n");

        
    }    

    return 0;
}