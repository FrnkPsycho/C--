#include <stdio.h>
#define ll long long
#define MAX 100005

int main()
{
    int hh,mm,m,d,y;
    while ( ~scanf("%d:%d,%d/%d/%d",&hh,&mm,&m,&d,&y) )
    {
        int hh12;
        int pm = 0;
        if ( hh >= 12 )
        {
            pm = 1;
            hh12 = hh-12;
        }
        else hh12 = hh;
        printf("%d%02d%02d,%02d:%02d",y,m,d,hh12,mm);
        if ( pm ) printf("PM\n");
        else printf("AM\n");
    }
    
    return 0;
}