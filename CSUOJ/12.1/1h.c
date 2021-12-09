#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long
#define MAX_STACK 100001
#define MAX_PAIR 50001

int cmp(const void *a,const void *b)
{
    return ((int *)a)[0] > ((int *)b)[0];
}

int main()
{
    char str[MAX_STACK]={'\0'};
    while ( scanf("%s",&str)!=EOF )
    {
        int stack[MAX_STACK]={0};
        int pair[MAX_PAIR][2];
        memset(stack, 0, sizeof(int) * MAX_STACK);
        memset(pair, 0, sizeof(int) * 2 * MAX_PAIR);
        int top=0;
        int k=0;
        for ( int i=0; i<strlen(str) ; i++ )
        {
            if ( str[i] == '(' ) stack[++top] = i+1;
            else if ( str[i] == ')')
            {
                pair[k][0] = stack[top];
                pair[k][1] = i+1;
                top--;
                k++;
            } 
        }

        qsort(pair,k,sizeof(int)*2,cmp);
        for ( int i=0 ;i<k ; i++)
        {
            printf("%d %d\n",pair[i][0],pair[i][1]);
        }
    }
    return 0;
}