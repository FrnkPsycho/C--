#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n;
    while (scanf("%d",&n)!=EOF)
    {
        int sum = 0;
        while (n > 0)
        {
            sum += n / 5;
            n /= 5;
        }
        printf("%d\n",sum);
    }
    return 0;
}