#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    while ( cin >> a >> b )
    {
        int year=0;
        while ( a <= b )
        {
            a *= 3;
            b *= 2;
            year++;
        }
        cout << year << endl;
    }
    return 0;
}