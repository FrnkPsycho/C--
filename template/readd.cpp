#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;
void read(ll &ss)
{
    int f = 1;
    ss = 0;
    char ch = getchar();
    while (ch > '9' || ch < '0')
    {
        if (ch == '-')
            f = -1;
        ch = getchar();
    }
    while (ch <= '9' && ch >= '0') ss *= 10, ss += ch - '0', ch = getchar();
    ss *= f;
    return;
}

int main()
{
    ll t;
    read(t);
    cout << t << endl;
    return 0;
}