#include <stdio.h>
#include <string.h>
typedef struct
{
    int a;
    int b;
} node;
node stack[100];
int right[100];
char s[100];
int main()
{
    while (scanf("%s",&s) != EOF)
    {
        int len = strlen(s), co = 0, all = 0;
        for (int i = len - 1; i >= 0; i--)
        {
            if (s[i] == ')')
            {
                right[co++] = i;
            }
            else
            {
                co--;
                stack[all].a = i;
                stack[all].b = right[co];
                all++;
            }
        }
        for (int i = all - 1; i >= 0; i--)
        {
            printf("%d %d\n", stack[i].a + 1, stack[i].b + 1);
        }
    }

    return 0;
}