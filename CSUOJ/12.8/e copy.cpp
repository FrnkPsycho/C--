#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    while (~scanf("%d", &t))
    {
        map<int, int> vis;
        while (t--)
        {
            int n;
            scanf("%d", &n);
            while (n--)
            {
                int temp;
                scanf("%d", &temp);
                if (vis[temp] != 1)
                {
                    printf("%d ", temp);
                    vis[temp] = 1;
                }
            }
            vis.clear();
            printf("\n");
        }
    }

    
    return 0;
}