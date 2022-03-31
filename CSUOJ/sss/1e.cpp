#include <bits/stdc++.h>

using namespace std;

struct stu
{
    string id;
    vector<int>score;
    double average;
};

bool cmp ( stu &a,stu &b )
{
    if ( (int)a.average*100 == (int)b.average*100) return a.id<b.id;
    return a.score>b.score;
}

int main()
{
    int n;
    while ( cin >> n )
    {
        vector<stu>comp;
        while ( n-- )
        {
            stu temp;
            int sum=0;
            cin >> temp.id;
            for ( int i=0 ; i<5 ; i++ )
            {
                int t;
                cin >> t;
                temp.score.push_back(t);
            }
            sort(temp.score.begin(),temp.score.end());
            for ( int i=1 ; i<4 ; i++ )
            {
                sum+=temp.score[i];
            }
            double ave = sum/3.0;
            ave = round(ave*100)/100.0;
            temp.average = ave;
            comp.push_back(temp);
        }
        sort(comp.begin(),comp.end(),cmp);
        for ( int i=0 ; i<comp.size() ; i++ )
        {
            cout << comp[i].id << " ";
            printf("%.2f\n",comp[i].average);
        }
    }
    return 0;
}