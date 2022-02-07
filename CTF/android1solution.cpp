#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

long quickpow(long base, long power, long mod)
{
    long result = 1L;
    while (power!=0L)
    {
        if ((1L&power) != 0L)
        {
            result = result * base % mod;
        }
        base = base * base % mod;
        power >>= 1;
    }
    return result % mod;
}

int main()
{
    ll t;
    long res[8] = {0x175308ACL, 0x149BEC33L, 595821075L, 0x1B832434L, 0x3CA6386L, 0x1EE9701DL, 849300837L, 0xED1351L};
    // long res[8] = { 0xE2DE93CL,
    //                0x12BA3A60L,
    //                0x2795D826L,
    //                0x14A7E8C1L,
    //                0x35798C4EL,
    //                0x1BA2B68FL,
    //                160980662L,
    //                0x1D894620L } ;
    long mod = 1000000007L;
    string str;
    int i;
    for ( i=0 ; i<8 ; i++ )
    {
        long tmp = quickpow(res[i], mod-2L, mod);
        char c = (char)(((int)(tmp & 0x7FL)));
        tmp = tmp >> 7;
        char b = (char)(((int)tmp) & 0x7F);
        char a = (char)(((int)(0x7FL & tmp >> 7)));
        str = str + a + b + c;

    }
    cout << str;
    return 0;
}