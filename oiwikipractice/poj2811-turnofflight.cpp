// http://bailian.openjudge.cn/practice/2811/
// 熄灯问题

#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

int light[6][7];
int olight[6][7];
int click[6][7];
int a,b,c,d,e,f;
int main()
{
    for ( int i=1 ; i<=5 ; i++ )
    {
        for ( int j=1 ; j<=6 ; j++ )
        {
            int t;
            cin >> t;
            olight[i][j] = t;
        }
    }
    int flag = 0;
    for (  a=0 ; a <= 1 ; a++)
    {
        for ( b = 0; b <= 1; b++)
        {
            for ( c = 0; c <= 1; c++)
            {
                for ( d = 0; d <= 1; d++)
                {
                    for ( e = 0; e <= 1; e++)
                    {
                        for ( f = 0; f <= 1; f++)
                        {
                            memset(click,0,sizeof(click));
                            click[1][1] = a;
                            click[1][2] = b;
                            click[1][3] = c;
                            click[1][4] = d;
                            click[1][5] = e;
                            click[1][6] = f;
                            memcpy(light,olight,sizeof(olight));
                            for (int i = 1; i <= 6; i++)
                            {
                                if (click[1][i] == 1)
                                {
                                    light[1][i]++;
                                    light[1][i + 1]++;
                                    light[1][i - 1]++;
                                    light[0][i]++;
                                    light[2][i]++;
                                }
                            }
                            for (int i = 2; i <= 5; i++)
                            {
                                for (int j = 1; j <= 6; j++)
                                {
                                    if (light[i - 1][j] % 2 != 0)
                                    {
                                        light[i][j]++;
                                        light[i][j + 1]++;
                                        light[i][j - 1]++;
                                        light[i + 1][j]++;
                                        light[i - 1][j]++;
                                        click[i][j] = 1;
                                    }
                                }
                            }

                            for (int i = 1; i <= 6; i++)
                            {
                                if (light[5][i] % 2 != 0)
                                    flag = 1;
                            }
                            if (flag == 0)
                                goto end;
                            else flag = 0;
                        }
                        
                    }
                }
            }
        }
    }
    end:
    cout << endl;
    if ( flag == 0 )
    {
        for (int i = 1; i <= 5; i++)
        {
            for (int j = 1; j <= 6; j++)
            {
                cout << click[i][j] << " ";
            }
            cout << endl;
        }
    }
    
    /*
    0 0 0 0 0 0
    0 0 0 0 0 0
    0 0 0 0 0 0
    0 0 0 0 0 0
    0 1 1 1 0 1

0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 1 0 0 0 0
1 1 1 0 0 0
    */
    return 0;
}