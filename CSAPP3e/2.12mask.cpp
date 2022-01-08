#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

int main()
{
    int x = 0x12345678;
    int a = x&0xFF; // 保留2位最低有效字节
    int b = x^~0xFF; // 除了最低有效字节 其他位取补
    int c = x|0xFF; // 最低有效字节设为1 其他不变
    int d = x|0x01; // 最低有效字节设为1 其他不变
    printf("%.8x\n",a);
    printf("%.8x\n",b);
    printf("%.8x\n",c);
    printf("%.8x\n",d);

    printf("%.8x",~0);

    return 0;
}