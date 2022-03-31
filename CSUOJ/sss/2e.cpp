#include <bits/stdc++.h>

using namespace std;

int normalm[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
int runm[13] = {0,31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
    int t;
    while(cin >> t)
    {
        while ( t-- )
        {
            int delta = 0;
            int y, m, d;
            scanf("%d-%d-%d",&y,&m,&d);
            int py = y;
            if ( y != 2021 )
            {
                if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0))
                {
                    delta += runm[m] - d;delta++;
                    m++;
                    for (m; m <= 12; m++)
                    {
                        delta += runm[m];
                    }
                    y++;
                }
                else
                {
                    delta += normalm[m] - d;delta++;
                    m++;
                    for (m; m <= 12; m++)
                    {
                        delta += normalm[m];
                    }
                    y++;
                    
                }
            }

            for (y ; y<2021; y++ )
            {
                if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0))
                {
                    delta += 366;
                }
                else
                    delta += 365;
            }
            delta++;
            // if ( py != 2021 ) delta ++;
            cout << delta << endl;
            
            // delta += 
            // int dy,dm,dd;

            // dy = 2021 - y;
            // dm = dy * 12 - m;
        }
    }
    return 0;
}