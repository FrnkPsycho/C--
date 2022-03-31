#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, m;
    int a[100];
    bool vis[120]; //标记某个结果是否出现
    int cnt[100];  //记录所有的可能
    while (cin >> n && n != 0)
    {
        memset(vis, 0, sizeof(vis));
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n); //必须要从小到大（在这wa了一小时QAQ）
        cin >> m;
        int ans = 1;
        cnt[0] = 0; //一开始啥都没买所以花销为0
        int maxz = 0;
        for (int i = 0; i < n; i++)
        {
            int temp = ans;
            for (int j = 0; j < temp; j++)
            {
                int v = cnt[j] + a[i];
                if (cnt[j] <= m && !vis[v]) //如果cnt[j]<=m，才能在此基础上继续购买，同时要判断下V是否已经在情况里了，没有则加入
                {
                    cnt[ans++] = v; //
                    vis[v] = 1;
                    maxz = max(maxz, v);
                }
            }
        }
        cout << m - maxz << endl;
    }
}