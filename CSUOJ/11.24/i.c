#include <stdio.h>

int gcd(int a, int b)
{
    int temp;
    while (b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main()
{
    int a, b, c, d;
    while (scanf("%d %d %d %d",&a,&b,&c,&d) != EOF )
    {
        int base = b * d;
        int up = a * d + b * c;
        printf("%d %d\n",up / gcd(up, base),base / gcd(up, base));
    }

    return 0;
}