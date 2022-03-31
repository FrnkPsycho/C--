#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long

int cmp ( const void *a,const void *b )
{
    return *(int *) a > *(int *)b;
}

int main()
{
    int n,s;
    while ( scanf("%d %d",&n,&s) != EOF )
    {
        int nums[1005] = {0};
        memset(nums,0,sizeof(int)*1005);
        for ( int i=0 ; i<n ; i++ )
        {
            scanf("%d",&nums[i]);
        }
        // int len=1;
        int minlen=2000;
        // int sum; // 记得初始化
        int flag = 0;

        for ( int i=0 ;i<n ; i++ )
        {
            for ( int j=i ; j<n ; j++ )
            {
                int sum = 0;
                for ( int k=i ; k<=j ; k++ )
                {
                    sum+=nums[k];
                }
                if ( sum >= s )
                {
                    flag = 1;
                    if ( j-i+1 < minlen ) minlen = j-i+1;
                    break;
                }
            }
        }
        // if ( n==1 )
        // {
        //     if ( nums[0] >= s )
        //     {
        //         flag = 1;
        //         minlen = 1;
        //     }
        // }
        // else
        // {
        //     for ( int i=0 ; i<n ; i++ )
        //     {
        //         sum=nums[i];
        //         if ( sum >= s )
        //         {
        //             flag = 1;
        //             minlen = 1;
        //             break;
        //         }
        //         for ( int j=i ; j<n-1 ; j++ )
        //         {

        //             if ( nums[j]+1 == nums[j+1] )
        //             {
        //                 len++;
        //                 sum+=nums[j+1];
        //                 if ( sum >= s ) 
        //                 {
        //                     flag = 1;
        //                     if ( len < minlen ) minlen = len;
        //                     sum = nums[j + 1];
        //                     len = 1;
        //                     break;
        //                 }
        //             }
        //             else
        //             {
        //                 sum=0;
        //                 len=1;
        //                 break;
        //             }
        //         }
        //     }
        // }
        if ( flag ) printf("%d\n",minlen);
        else printf("0\n");
    }
    return 0;
}