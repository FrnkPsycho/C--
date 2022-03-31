#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int judge(int y) ///判断闰年还是平年
{
    if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n, days, x, i, j;
    int m[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int ans[8] = {0};
    scanf("%d", &n);
    days = 13;
    for (i = 1900; i < 1900 + n; i++)
    {
        if (judge(i))
        {
            for (j = 1; j <= 12; j++)
            {

                if (j == 2) ///闰年2月29天
                {
                    x = days % 7;
                    days += m[j] + 1; ///需要多加上一天
                    ans[x]++;
                }
                else
                {

                    x = days % 7;
                    days += m[j];
                    ans[x]++;
                }
            }
        }
        else ///平年
        {
            for (j = 1; j <= 12; j++)
            {

                x = days % 7;
                days += m[j];
                ans[x]++;
            }
        }
    }
    printf("%d %d %d %d %d %d %d\n", ans[6], ans[0], ans[1], ans[2], ans[3], ans[4], ans[5]);
    return 0;
}