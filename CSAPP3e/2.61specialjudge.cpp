#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

int main()
{
    int x = 0xFFFFFFFF;
    cout << !~x;
    cout << !x;
    cout << !~(x | ~0xff);
    cout << !((x >> (sizeof(int)-1)<<3) & 0xFF);
    return 0;
}