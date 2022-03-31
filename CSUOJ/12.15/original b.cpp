#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while ( cin >> n )
    {
        vector<int> enemy;
        for (int i = 0; i < n; i++)
        {
            int h;
            scanf("%d",&h);
            enemy.push_back(h);
        }
        sort(enemy.begin(), enemy.end());
        int level = 0;
        int bullet = 1;
        int i = 0;
        int dead = 0;
        for (bullet = 1; bullet <= enemy[n - 1] / 2; bullet++)
        {
            level += 2;
            for (; i < enemy.size(); i++)
            {
                if (enemy[i] <= level)
                {
                    level += 2;
                    dead++;
                }
                else
                    break;
            }
            if (dead == n)
                break;
        }
        cout << bullet << endl;
        enemy.clear();
    }
    
    return 0;
}