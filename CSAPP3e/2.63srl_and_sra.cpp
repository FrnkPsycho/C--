#include <bits/stdc++.h>
#include <cassert>
#define ll long long
#define MAX 100005

using namespace std;

unsigned srl(unsigned x, int k) {
    unsigned xsra = (int) x >> k;
    
    return xsra & ~(0xFFFFFFFF << (8*sizeof(int)-k));
}
unsigned sra(unsigned x, int k) {
    unsigned xsrl = (unsigned) x >> k;

    int w = sizeof(int)<<3;
    int mask = (int) -1 << (w-k);
    int m = 1<<(w-1);
    mask &= !(x&m) - 1;
    return xsrl | mask;
}

int main()
{
    unsigned test_unsigned = 0x12345678;
    int test_int = 0x12345678;

    assert(srl(test_unsigned, 4) == test_unsigned >> 4);
    assert(sra(test_int, 4) == test_int >> 4);

    test_unsigned = 0x87654321;
    test_int = 0x87654321;

    assert(srl(test_unsigned, 4) == test_unsigned >> 4);
    assert(sra(test_int, 4) == test_int >> 4);
    return 0;
}