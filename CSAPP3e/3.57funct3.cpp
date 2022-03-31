#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

double funct3(int *ap, double b, long c, float *dp) {
    int a = *ap;
    float d = *dp;
    if ( a>b ) return c*d;
    else return c + 2*d;
}

int main()
{
    return 0;
}