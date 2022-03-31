#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long

char nums[201][1005];

int cmp(const void *a,const void *b)
{
    if (strlen((char *)b) == strlen((char *)a)) return strcmp((char *)a, (char *)b);
    else return strlen((char *)a) - strlen((char *)b);
}

int main()
{
    int n;
    while ( scanf("%d",&n) != EOF )
    {
        memset(nums,'\0',sizeof(char)*201*1005);
        for ( int i=0 ; i<n ; i++ )
        {
            scanf("%s",&nums[i]);
        }
        qsort(nums,n,sizeof(nums[0]),cmp);
        for ( int i=0 ; i<n ; i++ )
        {
            printf("%s\n",nums[i]);
        }
    }
    return 0;
}