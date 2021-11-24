#include <stdio.h>

int check(int i)
{
    int a, b, c;
    a = b = c = 0;
    if (i < 100 && (i % 10 == 6 || i / 10 == 6))
        return 1;
    else if (i > 100)
    {
        a = i % 10;
        i /= 10;
        b = i % 10;
        i /= 10;
        c = i % 10;
        if (a == 6 || b == 6 || c == 6)
            return 1;
    }
    return 0;
}
int main()
{
    int a[5000000];
    int j = 0;
    for (int i = 6; i <= 6000000; i++)
    {
        if (i % 6 == 0)
            a[j++] = i;
        else if (check(i) == 1)
            a[j++] = i;
    }
    int n;
    while (scanf("%d", &n) != EOF)
    {
        printf("%d\n", a[n - 1]);
    }

    return 0;
}