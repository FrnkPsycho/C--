#include <bits/stdc++.h>

using namespace std;

struct info 
{
    string name;
    int h;
};

bool cmp (info &a , info &b )
{
    if ( a.h == b.h ) return a.name < b.name;
    else return a.h > b.h;
}

int main()
{
    vector<info>people;
    int n,k;
    cin >> n >> k;
    for ( int i=0 ; i<n ; i++ )
    {
        info temp;
        cin >> temp.name >> temp.h;
        people.push_back(temp);
    }
    sort(people.begin(),people.end(),cmp);
    int per_col = n/k;
    int last_col = n % per_col + per_col;
    // vector<vector<info>>pos;
    int x=0,col=0;
    for ( int i=0 ; i<k ; i++ )
    {
        if ( i == 0 ) 
        {
            col = last_col;
        }
        else 
        {
            col = per_col;
        }
        vector<info>pos(col);
        int middle = col/2;
        pos[middle] = people[x];
        int a=middle-1;
        int b=middle+1;

        for ( int m=x+1 ; m<x+col ; m+=2 )
        {
            pos[a--] = people[m];
        }
        for ( int m=x+2 ; m<x+col ; m+=2 )
        {
            pos[b++] = people[m];
        }

        int j;
        for ( j=0 ; j<pos.size()-1 ; j++ )
        {
            cout << pos[j].name << " ";
        }
        cout << pos[j].name << endl;
        x+=col;
    }
    return 0;
}