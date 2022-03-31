#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    while ( cin >> t )
    {
        if ( t==0 ) break;
        long long sum=0;
        char hexx[1000] = {'\0'};
        sprintf(hexx,"%x",t);
        for ( int i=0 ; i<1000 ; i++ )
        {
            if ( hexx[i] == '\0' ) break;
            if ( isdigit(hexx[i]) )
            {
                sum += hexx[i] - '0';
            }
        }
        cout << sum << endl;
    }
    return 0;
}