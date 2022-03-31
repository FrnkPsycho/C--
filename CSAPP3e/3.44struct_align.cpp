#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

struct P1 { int i; char c; int j; char d;};
struct P2 { int i; char c; char d; long long j;};
struct P3 { short w[3]; char c[3]; };
struct P4 { short w[5]; char *c[3]; };
struct P5 { struct P3 a[2]; struct P2 t;};
// struct P6 {};


int main()
{
    P1 a;
    printf("%ld\n",sizeof(P1));
    printf("%ld\n",sizeof(P2));
    printf("%ld\n",sizeof(P3));
    printf("%ld\n",sizeof(P4));
    printf("%ld\n",sizeof(P5));
    return 0;
}