#include <bits/stdc++.h>

using namespace std;

struct stu
{
    string name;
    int yw;
    int sx;
    int yy;
    int sum;
};

bool sumcmp(stu &a,stu &b)
{
    if ( a.sum == b.sum ) return a.name<b.name;
    else return a.sum > b.sum;
}

bool ywcmp(stu &a,stu &b)
{
    if ( a.yw == b.yw ) return a.name < b.name;
    else return a.yw > b.yw;
}

bool sxcmp(stu &a, stu &b)
{
    if (a.sx == b.sx)
        return a.name < b.name;
    else
        return a.sx > b.sx;
}

bool yycmp(stu &a, stu &b)
{
    if (a.yy == b.yy)
        return a.name < b.name;
    else
        return a.yy > b.yy;
}

int main()
{
    int n;
    while ( cin >> n )
    {
        vector<stu>s;
        while ( n-- )
        {
            stu temp;
            int sum;
            cin >> temp.name >> temp.yw >> temp.sx >> temp.yy;
            temp.sum = temp.yw + temp.sx + temp.yy;
            s.push_back(temp);
        }

        sort(s.begin(),s.end(),sumcmp);
        for ( int i=0 ; i<3 ; i++ )
        {
            cout << s[i].name << " " << s[i].sum  << endl;
        }
        cout << endl;

        sort(s.begin(), s.end(), ywcmp);
        for (int i = 0; i < 3; i++)
        {
            cout << s[i].name << " " << s[i].yw << endl;
        }
        cout << endl;

        sort(s.begin(), s.end(), sxcmp);
        for (int i = 0; i < 3; i++)
        {
            cout << s[i].name << " " << s[i].sx << endl;
        }
        cout << endl;

        sort(s.begin(), s.end(), yycmp);
        for (int i = 0; i < 3; i++)
        {
            cout << s[i].name << " " << s[i].yy << endl;
        }
        cout << endl;
    }
    
    return 0;
}