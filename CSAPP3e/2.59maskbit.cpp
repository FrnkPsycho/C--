#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

int main()
{
    ll x = 0x89abcdef;
    ll y = 0x76543210;
    int mask = 0xff;
    printf("%x",(x&mask) | (y&~mask));
    return 0;
}