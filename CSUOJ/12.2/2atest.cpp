#include <bits/stdc++.h>
using namespace std;
const int N = 15;
bool vis[N];
int ans[N];
int n;
void dfs(int now, int last) ///now为搜到了第几位，last代表上一个数的奇偶性
{
    if (now == n)
    {
        for (int i = 0; i < n; i++)
            printf("%d ", ans[i]);
        printf("\n");
        return;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (!vis[i] && last != (i & 1)) ///i&1表示i的奇偶性i与1进行与运算(为1时表示奇数为0时表示偶数)
            {
                vis[i] = 1;
                ans[now] = i;
                dfs(now + 1, i & 1); ///now+1表示搜到的位数加1,i&1表示i的奇偶性
                vis[i] = 0;
            }
        }
    }
}
int main()
{
    while (scanf("%d", &n) != EOF)
    {
        dfs(0, -1);
    }
}
