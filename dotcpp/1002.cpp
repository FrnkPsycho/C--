#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int a,b,c;
    vector<int>v;
    for ( int i=0 ; i<3 ; i++ )
    {
        cin >> a;
        v.push_back(a);
    }
    auto p = max_element(v.begin(),v.end());
    cout << *p;
    return 0;
}