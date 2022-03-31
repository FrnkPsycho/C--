#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

float sum_elements(float a[] , unsigned l)
{
    int i;
    float res;
    for ( i=0 ; i<=l-1 ; i++ ) // unsigned -1 = Umax
    {
        res+=a[i];
    }
    return res;
}
int main()
{
    ll t;
    float a[5] = {1.1,1.2,1,1,1};
    sum_elements(a,0);
    return 0;
}