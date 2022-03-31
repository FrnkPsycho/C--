#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    long long a=1,b=1;
    vector<long long>fib;
    fib.push_back(a);
    fib.push_back(b);
    for ( int i=0 ; i<20 ; i+=2 )
    {
        cout << fib[i] << " " << fib[i+1] << " ";
        a = a+b;
        b = a+b;
        fib.push_back(a);
        fib.push_back(b);
    }
    return 0;
}