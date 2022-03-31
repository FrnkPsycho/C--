#include <stdio.h>
#include <string.h>
int main()
{
    int ch[50][50], sh[50][50], a;
    scanf("%d", &a);
    for (int x = 0; x < a; x++)
    {
        for (int y = 0; y < a; y++)
        {
            scanf("%d", &ch[x][y]);
        }
    }
    for (int h = 0; h < a; h++)
    {
        for (int i = 0; i < a; i++)
        {
            sh[h][i] = ch[i][h];
        }
    }
    for (int f = 0; f < a; f++)
    {
        for (int g = 0; g < a; g++)
        {
            if (g != a - 1)
            {
                printf("%d ", sh[f][g]);
            }
            else
            {
                printf("%d\n", sh[f][g]);
            }
        }
    }
}