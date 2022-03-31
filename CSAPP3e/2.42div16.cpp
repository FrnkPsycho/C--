#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

int div16 (int x)
{
    int bias = (x>>31) & 0xF;
    return (x+bias) >> 4;
}

int main()
{
    int x;
    cin >> x;
    cout << div16(x);
    return 0;
}