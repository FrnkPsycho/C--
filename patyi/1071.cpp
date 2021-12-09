#include <bits/stdc++.h>

using namespace std;

int main()
{
    int token, k;
    cin >> token >> k;
    for (int ki = 0; ki < k; ki++)
    {
        int n1, b, t, n2;
        int res;
        cin >> n1 >> b >> t >> n2;
        if (n2 > n1)
            res = 1;
        else
            res = 0;

        if (t > token)
        {
            printf("Not enough tokens.  Total = %d.\n", token);
        }
        else
        {
            if (b == res)
            {
                token += t;
                printf("Win %d!  Total = %d.\n", t, token);
            }
            else
            {
                token -= t;
                printf("Lose %d.  Total = %d.\n", t, token);
            }
        }

        if (token <= 0)
        {
            printf("Game Over.\n");
            break;
        }
    }
    return 0;
}