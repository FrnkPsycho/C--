#include <stdio.h>

int main()
{
    char t[10001] = {'\0'};
    string t;
    while (scanf("%d",&t)!=EOF)
    {
        int csu[3] = {0};
        int min = 0;
        for (int i = 0; i < strlen(t); i++)
        {
            if (t[i] == 'C')
                csu[0]++;
            else if (t[i] == 'S')
                csu[1]++;
            else if (t[i] == 'U')
                csu[2]++;
        }
        min = csu[0];
        if (csu[1] < min)
            min = csu[1];
        if (csu[2] < min)
            min = csu[2];
        printf("%d\n",min);
    }
    return 0;
}