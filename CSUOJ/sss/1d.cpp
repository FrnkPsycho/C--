#include <bits/stdc++.h>

using namespace std;

int gcd ( int a , int b )
{
    int temp;
    while ( b!=0 )
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main()
{
    int a,b,c,d;
    char o;
    string str;
    while (scanf("%d/%d%c%d/%d",&a,&b,&o,&c,&d)!=EOF)
    {

        int base = b*d/gcd(b,d);
        int up=0;
        if ( o == '-' ) up = a*(base/b) - (base/d)*c;
        else up = a*(base/b) + (base/d)*c;

        if ( up % base == 0 )
        {
            cout << up/base << endl;
        }

        else if ( up > 0 )
        {
            if (up / base != 0)
            {
                int re = up / base;
                up %= base;
                int g = gcd(abs(up),abs(base));
                up/=g;base/=g;
                cout << re << "+" << up << "/" << base << endl;
            }
            else
            {
                int g = gcd(abs(up),abs(base));
                up/=g;base/=g;
                cout << up << "/" << base << endl;
            }
        }
        else
        {
            if ( up/base != 0 )
            {
                int re = up / base - 1;
                up = base - abs(up % base);
                int g = gcd(abs(up),abs(base));
                up/=g;base/=g;
                cout << re << "+" << up << "/" << base << endl;
            }
            else
            {
                int g = gcd(abs(up),abs(base));
                up/=g;base/=g;
                cout << up << "/" << base << endl;
            }
        }
    }
    
    return 0;
}