#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long

int main()
{
    int m;
    while ( scanf("%d",&m) != EOF )
    {
        double pos[2] = {0.0,0.0}; //0->x 1->y
        int turns=0;
        for ( int i=0 ; i<m ; i++ )
        {
            char str[5]={'\0'};
            memset(str,'\0',sizeof(char)*5);
            scanf("%s",&str);
            if ( str[0] == 'T' )
            {
                turns++;
            }

            // turns % 4 ; 0y+ 1x+ 2y- 3x-
            else if ( str[0] == 'G' )
            {
                double len;
                scanf("%lf",&len);
                if ( turns % 4 == 0) pos[1]+=len;
                if ( turns % 4 == 1) pos[0]+=len;
                if ( turns % 4 == 2) pos[1]-=len;
                if ( turns % 4 == 3) pos[0]-=len;
            }
        }
        printf("%.3f %.3f\n",pos[0],pos[1]);
    }
    return 0;
}