#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
    return *(int *)a > *(int *)b;
}
int enemy[10005];
int main()
{
    int n;
    while ( ~scanf("%d",&n) )
    {   
        for (int i = 0; i < n; i++)
        {
            int h;
            scanf("%d",&h);
            enemy[i] = h;
        }
        qsort(enemy,n,sizeof(enemy[0]),cmp);
        // sort(enemy.begin(), enemy.end());
        int k = (enemy[n-1] + 1) / 2 + 1;
        
        
        int level = 0;
        int bullet = 1;
        int i = 0;
        int dead = 0;
        for (bullet = 1; bullet <= enemy[n - 1] / 2; bullet++)
        {
            level += 2;
            for (; i < n; i++)
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
        printf("%d\n",bullet);
        // enemy.clear();
    }
    
    return 0;
}