#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

typedef unsigned char * byte_pointer;

void show_bytes(byte_pointer start , size_t len)
{
    for ( size_t i=0; i<len; i++ )
    {
        printf("%.2x ",start[i]);
    }
    printf("\n");
}

void show_int(int x)
{
    show_bytes((byte_pointer)&x , sizeof(int));
}
void show_short(short x)
{
    show_bytes((byte_pointer)&x , sizeof(short));
}
void show_double(double x)
{
    show_bytes((byte_pointer)&x , sizeof(double));
}
void show_float(float x)
{
    show_bytes((byte_pointer)&x , sizeof(float));
}

void show_pointer(void *x)
{
    show_bytes((byte_pointer)&x , sizeof(void*));
}

int main()
{
    // show_int(1);
    // show_float(1.0);
    // int i=1;
    int x = 0x66ccff;
    int mx = -x;
    double lf = 0.1;
    float f = 3510593;
    // show_bytes((byte_pointer)&x,sizeof(int));
    // show_bytes((byte_pointer)&mx,sizeof(int));
    show_double(lf);
    show_float(f);
    // show_pointer(&i);
    return 0;
}