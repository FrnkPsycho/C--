#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

int func(int a, int b)
{
    return a+b;
};

int main()
{
    int (*fp)(int,int);
    fp = func;
    printf("%d",fp(1,2));
    // gets();
    return 0;
}