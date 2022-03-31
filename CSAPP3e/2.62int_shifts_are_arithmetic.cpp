#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

bool int_shift_are_arithmetic() {
    int x = 0xFFFFFFFF;
    return !(x ^ (x>>1));
}

int main()
{
    cout << int_shift_are_arithmetic();
    return 0;
}