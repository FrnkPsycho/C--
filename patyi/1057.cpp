#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    getline(cin,str);
    int sum=0;
    stack<int>bin;
    for ( int i=0 ; i<str.size() ; i++ )
    {
        if ( isalpha(str[i]) )
        {
            char ch = tolower(str[i]);
            int k = ch - 'a' + 1;
            sum+=k;
        }
    }
    while ( sum != 0 )
    {
        bin.push(sum%2);
        sum /= 2;
    }
    int one=0,zero=0;
    while (!bin.empty())
    {
        int a = bin.top();
        bin.pop();
        if ( a==0 ) zero++;
        else one++;
    }
    cout<<zero<<" "<<one<<endl;
    return 0;
}