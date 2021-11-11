#include <bits/stdc++.h>

using namespace std;

// 思路：
// 1 2 3 4 5 6
// 对于数组中某个数 从左到它有i种 ：(1,2) (2)
// 从右到它有n-(i-1)种:(2) (2,3) (2,3,4) (2,3,4,5) (2,3,4,5,6)
// 也就是说该数出现的集合有i*(n-i+1)种
int main()
{
    int n,j;
    double sum=0.0;
    vector<double>num;
    cin >> n;
    for ( int i=0 ; i<n ; i++ )
    {
        double temp;
        cin >> temp;
        sum += (long long)(temp*1000) * i * ( n-i+1 );
    }
    // 下面是单纯穷举 会超时
    // // sort(num.begin(),num.end());
    // for ( int len=1 ; len<=n ; len++ )
    // {
    //     for ( int i=0 ; i<n ; i++ )
    //     {
    //         j = i+len;
    //         if ( j > n ) break;
    //         for ( int a=i ; a<j ; a++ )
    //         {
    //             sum += num[a];
    //         }
    //     }
    // }
    // printf("%.2f\n",sum);

    printf("%.2f\n",sum/1000.0);
    return 0;
}