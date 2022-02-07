#include <bits/stdc++.h>
#include <stdio.h>
#define ll long long
#define MAX 100005

using namespace std;

int main()
{
    ll t;
    // string str = "ABVE mipWmeTub{Pvx|wKa~~kF{ohow}UUG|GJHT\[_HXB\pVD\P@\YYE";
    char strr[58];
    for ( int i=0 ; i<58 ; i++ )
    {
        char t = getchar();
        strr[i] = t;
    }
    // string str = "Pvx|wKa~~kF{ohow";
        // string str = "I am right";
        // for (int i = 0; i < str.length(); i++)
        // {
        //     str[i] ^= i;
        // }
        // cout << str;
    for (int i = 0; i < 58; i++)
    {
        strr[i] ^= i;
    }
    printf("%s", strr);
    return 0;
}