#include <stdio.h>
#include <string.h>
int bian[200][200], flag = 0, vis[200];
void search(int s)
{
    vis[s] = 1;
    for (int i = 1; i <= bian[s][0]; i++)
    {
        if (flag == 1)
        {
            return;
        }
        if (bian[s][i] == 'm')
        {
            flag = 1;
            return;
        }
        if (!vis[bian[s][i]])
        {
            search(bian[s][i]);
        }
    }
}
int main()
{
    char temp[18];
    while (scanf("%s", temp) != EOF)
    {
        for (int i = 0; i < 200; i++)
        {
            vis[i] = 0;
            for (int j = 0; j < 200; j++)
            {
                bian[i][j] = 0;
            }
        }
        flag = 0;
        int len = strlen(temp), l = temp[0], r = temp[len - 1];
        bian[l][0]++;
        bian[l][bian[l][0]] = r;
        while (scanf("%s", temp) && temp[0] != '0')
        {
            int len = strlen(temp), l = temp[0], r = temp[len - 1];
            bian[l][0]++;
            bian[l][bian[l][0]] = r;
        }
        search('b');
        if (flag)
        {
            printf("Yes.\n");
        }
        else
        {
            printf("No.\n");
        }
    }

    return 0;
}