#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long

int nums[10002] = {0};

int main()
{
    int n, s;
    while (scanf("%d %d", &n, &s) != EOF)
    {
        memset(nums, 0, sizeof(int) * 10002);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &nums[i]);
        }
        int head=0,tail=0;
        int min=99999;
        int sum=0;  
        while ( tail < n )
        {
            sum+=nums[tail];
            while ( sum >= s )
            {
                if ( tail - head + 1 < min ) min = tail - head + 1;
                sum -= nums[head];
                head++; 
            }
            tail++;
        }
        if ( min == 99999 ) printf("0\n");
        else printf("%d\n",min);
    }
    return 0;
}