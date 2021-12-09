#include <stdio.h>

int array[12];
int n;
int book[12];

void dfs(int head, int step)
{
    array[step] = head;
    if (step == n)
    {
        for (int i = 1; i <= n; i++)
        {
            printf("%d", array[i]);
            if (i != n)
                printf(" ");
        }
        printf("\n");
        return;
    }
    else
    {
        if (head % 2 != 0)
        {
            for (int j = 1; j <= n; j++)
            {
                if (j % 2 == 0 && book[j] == 0)
                {
                    book[j] = 1;
                    dfs(j, step + 1);
                    book[j] = 0;
                }
            }
        }
        else if (head % 2 == 0)
        {
            for (int j = 1; j <= n; j++)
            {
                if (j % 2 != 0 && book[j] == 0)
                {
                    book[j] = 1;
                    dfs(j, step + 1);
                    book[j] = 0;
                }
            }
        }
    }
    return;
}

int main()
{
    setbuf(stdout, 0);
    while (scanf("%d", &n) != EOF)
    {
        for (int i = 1; i <= n; i++)
        {
            book[i] = 1;
            dfs(i, 1); //在main里面先把第一个数字遍历 这样就可以确定奇偶顺序
            book[i] = 0;
        }
    }
    return 0;
}
