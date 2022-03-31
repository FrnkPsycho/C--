#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,d;
    int mo[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int dd[7] = {5,6,7,1,2,3,4};
    while ( cin >> m >> d )
    {
        int day=0;
        for ( int i=1 ; i<m ; i++ )
        {
            day += mo[i-1];
        }
        day += d;
        int delta = (day-1) % 7;
        cout << dd[delta] << endl;
    }
    return 0;
}