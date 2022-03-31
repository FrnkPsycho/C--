#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

typedef union {
    struct 
    {
        long u;
        short v;
        char w;
    } t1;
    struct 
    {
        int a[2];
        char *p;
        /* data */
    } t2;
} u_type;

void get(u_type *up, char *dest)
{
    *dest = *up->t2.p;
}

int main()
{
    return 0;
}