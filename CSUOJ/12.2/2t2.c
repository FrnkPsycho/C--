#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long
#define MAX 100
int ind[MAX];
char str[MAX];
int cnt[26];

int main()
{
    int n,m;
    while ( ~scanf("%d %d",&n,&m) )
    {
        scanf("%s",str+1);
        for ( int i=1 ; i<=n ; i++ )
        {
            ind[i] = ++cnt[str[i]-'a'];
        }
        while ( m-- )
        {
            int k;
            scanf("%d",&k);
            printf("%d\n",ind[k]);
        }
    }
    return 0;
}