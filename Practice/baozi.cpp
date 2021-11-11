#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,d,e,f;
    while ( scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f) != EOF )
    {
        int money,price;
        money = a*100 + b*10 + c;
        price = d*100 + e*10 + f;
        int res = money / price;
        cout<<res<<endl;
    }
    return 0;
}