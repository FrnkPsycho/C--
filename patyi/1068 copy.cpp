
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int cmp(const void *a, const void *b)
{
    return *(long *)a - *(long *)b;
}

int main(void)
{
    int m, n, tol;
    int i, j, k;
    int sum = 0;
    int col, row;
    short *tag = (short *)calloc(16777217, sizeof(short));
    int *num = NULL;
    scanf("%d%d%d", &m, &n, &tol);
    num = (int *)calloc(m * n, sizeof(int));
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
        {
            scanf("%d", num + i * m + j);
            k = num[i * m + j];
            tag[k]++;
        }
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
        {
            k = num[i * m + j];
            if (tag[k] == 1)
            {
                if (abs(k - num[(i - 1) * m + j]) <= tol && i >= 1)
                    continue;
                if (abs(k - num[(i + 1) * m + j]) <= tol && i <= n - 1)
                    continue;
                if (abs(k - num[i * m + j - 1]) <= tol && j >= 1)
                    continue;
                if (abs(k - num[i * m + j + 1]) <= tol && j <= m - 1)
                    continue;
                if (abs(k - num[(i - 1) * m + j - 1]) <= tol && i >= 1 && j >= 1)
                    continue;
                if (abs(k - num[(i - 1) * m + j + 1]) <= tol && i >= 1 && j <= m - 1)
                    continue;
                if (abs(k - num[(i + 1) * m + j - 1]) <= tol && i <= n - 1 && j >= 1)
                    continue;
                if (abs(k - num[(i + 1) * m + j + 1]) <= tol && i <= n - 1 && j < -m - 1)
                    continue;
                sum++;
                col = j;
                row = i;
            }
        }

    if (sum == 0)
        printf("Not Exist\n");
    else if (sum == 1)
        printf("(%d, %d): %d\n", col + 1, row + 1, num[row * m + col]);
    else
        printf("Not Unique\n");
}