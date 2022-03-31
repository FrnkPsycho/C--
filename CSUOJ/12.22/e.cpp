#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

struct student
{
    string num;
    double av;
    vector<int>score;
};

bool cmp(student a,student b)
{
    if ( (int)(a.av*100) == (int)(b.av*100) )
    {
        return a.num < b.num;
    }
    return a.av > b.av;
}

int main()
{
    int n;
    while ( cin >> n )
    {
        vector<student>stu;
        for ( int i=0 ;i<n ; i++ )
        {
            student temp;
            cin >> temp.num;
            for ( int i=0 ;i<5 ; i++ )
            {
                int k;
                cin >> k;
                temp.score.push_back(k);
            }
            sort(temp.score.begin(),temp.score.end());
            temp.av = (temp.score[1] + temp.score[2] + temp.score[3]) / 3.0;
            stu.push_back(temp);
        }
        sort(stu.begin(),stu.end(),cmp);
        for ( int i=0 ; i<n ; i++ )
        {
            cout << stu[i].num;
            printf(" %.2f\n",stu[i].av);
        }
    }
    return 0;
}