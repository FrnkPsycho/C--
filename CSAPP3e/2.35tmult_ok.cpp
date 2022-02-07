#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

int tmult_ok(int x,int y)
{
    int p=x*y;
    return !x || p/x == y;
}

int tmult_ok_64(int x, int y)
{
    int64_t pll= (int64_t) x*y;
    return pll == (int) pll;
}

int main()
{
    ll t;
    int x,y;
    cin >> x >> y;
    cout << tmult_ok(x,y) << endl;
    cout << tmult_ok_64(x,y) << endl;
    return 0;
}