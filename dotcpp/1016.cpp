#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    for ( int i=1 ; i<10 ; i++ )
    {
        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                int a = i*i*i + j*j*j + k*k*k;
                int b = i * 100 + j * 10 + k;
                if ( b == a) cout << b << endl;
            }
        }
    }
    return 0;
}