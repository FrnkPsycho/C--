#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>num = {2,3,4};
    for ( auto i=num.begin() ; i!=num.end() ; i++ )
    {
        cout<<*i<<" ";
    }
    for ( auto i:num )
    {
        cout << i << " ";
    }
    auto i=num.begin();
    cout << *next(i,2);
    cout << num.capacity();
    return 0;
}