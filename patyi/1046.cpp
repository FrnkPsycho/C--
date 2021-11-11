#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int ad=0,bd=0;
    while ( t-- )
    {
        int a1,a2,b1,b2;
        cin >> a1 >> a2 >> b1 >> b2;
        int sum = a1 + b1;
        if ( a2 == b2 ) continue;
        else if ( sum == a2 ) bd++;
        else if ( sum == b2 ) ad++;
        else continue;
    }
    cout << ad << " " << bd << endl;
    return 0;
}