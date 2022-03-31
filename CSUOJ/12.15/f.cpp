#include <bits/stdc++.h>

using namespace std;

struct date
{
    int m;
    int d;
    int y;
};

bool cmp(date a, date b)
{
    if ( a.y == b.y )
    {
        if ( a.m == b.m )
        {
            return a.d < b.d;
        }
        return a.m < b.m;
    }
    return a.y < b.y;
}

int main()
{
    int m,d,y;
    vector<date>dat;
    while ( ~scanf("%d/%d/%d",&m,&d,&y) )
    {
        date t;
        t.m = m;
        t.d = d;
        t.y = y;
        dat.push_back(t);
    }
    for ( int i=0 ; i<dat.size() ; i++ )
    {
        printf("%02d/%02d/%d\n",dat[i].m,dat[i].d,dat[i].y);
    }
    return 0;
}