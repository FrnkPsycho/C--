#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

unsigned replace_byte(unsigned x, int i, unsigned char b)
{
    unsigned mask = (unsigned)0xff << (i<<3);
    unsigned rep = (b << (i<<3));
    return (x&~mask) |  rep;
}

int main()
{
    printf("%x",replace_byte(0x12345678, 2, 0xAB));
    cout << endl;
    printf("%x",replace_byte(0x12345678, 0, 0xAB));
    return 0;
}