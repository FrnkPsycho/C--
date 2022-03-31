#include <stdio.h>
#include <string.h>

int main()
{
    char n[10001] = {'\0'};
    long long p;
    while ( scanf("%s %lld",&n,&p)!=EOF )
    {
        long long ans=0;
        for ( int i=0 ; i<strlen(n) ; i++ )
        {
            ans = ans * 10 + (n[i]-'0');
            ans %= p;
        }
        printf("%lld\n",ans);
    }
    
    return 0;
}