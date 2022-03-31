#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,t,n;
    int team[1001] = {0};
    int max=0,maxteam=0;
    cin >> t;
    while ( t-- )
    {
        int teamnum,playernum,score;
        scanf("%d-%d %d",&teamnum,&playernum,&score);
        team[teamnum] += score;
        if ( team[teamnum] > max ) 
        {
            maxteam = teamnum;
            max = team[teamnum];
        }
    }
    cout << maxteam << " " << max << endl;
    return 0;
}