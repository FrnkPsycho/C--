#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    int temp;
    while (b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main()
{
    int a, b, c, d;
    while (cin >> a >> b >> c >> d)
    {
        int base = b * d;
        int up = a * d + b * c;
        cout << up / gcd(up, base) << " " << base / gcd(up, base) << endl;
    }

    return 0;
}