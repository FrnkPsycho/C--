#include <bits/stdc++.h>

using namespace std;

struct qu
{
    int score;
    bool answer;
};

int main()
{
    int n,m;
    vector<qu>q;
    cin >> n >> m;
    for ( int i=0; i<m ; i++ )
    {
        qu temp;
        int temp_score;
        temp.answer = false;
        cin >> temp_score;
        temp.score = temp_score;
        q.push_back(temp);
    }
    for ( int i=0 ; i<m ; i++ )
    {
        int ans;
        cin >> ans;
        q[i].answer = ans;
    }
    
    for ( int i=0 ; i<n ; i++ )
    {
        int sum=0;
        for ( int j=0 ; j<m ; j++ )
        {
            int ans;
            cin >> ans;
            if ( ans == q[j].answer ) sum += q[j].score;
        }
        cout << sum << endl;
    }
    return 0;
}