#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string,bool>m;
//     m["a"] = true;
//     m["b"] = false;
// for ( auto p:m )
// {
//     cout << p.first << " " << p.second;
// }
    stack<int> s;
    s.push(1);
    s.push(2);
    cout << s.top();
    s.pop();
    cout << s.top();
    return 0;
}