#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

int uadd_ok(unsigned x, unsigned y)
{
    unsigned s = x+y;
    if ( s >= x ) return 1;
    else return 0; 
}

int main()
{
    ll t;
    unsigned x,y;
    cin >> x >> y;
    cout << uadd_ok(x,y);
    
    return 0;
}