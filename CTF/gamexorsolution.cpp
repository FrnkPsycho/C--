#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

int main()
{
    ll t;
    char enc[24] = {18, 101, 83, 84, 109, 3, 4, 6, 103, 107, 9, 62, 0, 17, 38, 47, 6, 62, 94, 82, 0, 18, 0, 0};
    char dec[24] = {0};
    for ( int i=1 ; i<24 ; i+=2 )
    {
        dec[i] = enc[i] ^ dec[i-2];
        dec[i-1] = enc[i-1] ^ dec[i];
    }
    printf("%s",dec);
    return 0;
}