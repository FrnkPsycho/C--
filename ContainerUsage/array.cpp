#include <bits/stdc++.h>

using namespace std;

int main()
{
    array<int,5>a;
    array<int,4>b{1,2,3,4};
    array<int,4>c{1,2};
    a.fill(2);
    for ( int i=0 ; i<a.size() ; i++)
        cout << a[i] << " ";
    return 0;
}