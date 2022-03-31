#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

long vframe(long n, long idx, long *q) {
    long i;
    long *p[n];
    p[0] = &i;
    for ( i=1; i<n; i++ ) {
        p[i] =  q;
    }
    return *p[idx];
}

int main()
{
    return 0;
}