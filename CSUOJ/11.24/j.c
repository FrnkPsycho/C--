#include <stdio.h>
#include <string.h>

int main()
{
    int m1,m2;
    while ( scanf("%d %d",&m1,&m2)!=EOF )
    {
        int r1=0, r2=0, r3=0;
        char command[1001] = {'\0'};
        scanf("%s",&command);
        for ( int i=0 ; i<strlen(command) ; i++ )
        {
            if ( command[i] == 'A' ) 
                r1=m1;
            else if (command[i] == 'B')
                r2 = m2;
            else if (command[i] == 'C')
                m1 = r3;
            else if (command[i] == 'D')
                m2 = r3;
            else if (command[i] == 'E')
                r3 = r1+r2;
            else if (command[i] == 'F')
                r3 = r1-r2;
    
        }
        printf("%d,%d\n",m1,m2);
    }

    
    return 0;
}