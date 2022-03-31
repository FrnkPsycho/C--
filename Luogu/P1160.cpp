#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

int main()
{
    ll t;
    int n;
    cin >> n;
    list<int>li;
    li.push_back(1);
    for ( int i=1 ;i<n ;i++)
    {
        int k,p;
        cin >> k >> p;
        if ( p==1 ) li.push_front(k);
        else if ( p==0 ) li.push_back(k);
    }
    int m;
    cin >> m;
    while ( m-- )
    {
        int del;
        cin >> del;
        li.remove(del);
    }
    while ( li.size() >= 0 )
    {
        cout << li.front();
        li.pop_front();
        if ( li.size() > 1 ) cout << " "; 
    }
    return 0;
}