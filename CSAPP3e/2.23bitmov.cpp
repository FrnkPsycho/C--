#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len)
{
    for (size_t i = 0; i < len; i++)
    {
        printf("%.2x ", start[i]);
    }
    printf("\n");
}

void show_int(int x)
{
    show_bytes((byte_pointer)&x, sizeof(int));
}

void show_float(float x)
{
    show_bytes((byte_pointer)&x, sizeof(float));
}

void show_pointer(void *x)
{
    show_bytes((byte_pointer)&x, sizeof(void *));
}

int fun1(unsigned w)
{
    return (int) ((w<<24)>>24);
}
int fun2(unsigned w)
{
    return ((int) w << 24 )>>24;
}

int main()
{
    unsigned t;
    scanf("%x",&t);
    show_int(fun1(t));
    show_int(fun2(t));
    return 0;
}