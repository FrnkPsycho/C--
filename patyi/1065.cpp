#include <bits/stdc++.h>

using namespace std;

int couple[100001] = {-1};
int shrinkzero(string &str)
{
    for ( int i=0 ; i<str.length() ; i++ )
    {
        if ( str[i] == '0' ) str.erase(i);
        else break;
    }
    return stod(str);
}

int main()
{
    int n;
    vector<string>present;
    vector<string>single;
    cin >> n;
    getchar();
    while ( n-- )
    {
        string a,b;
        int aa,bb;
        cin >> a >> b;
        aa = shrinkzero(a);
        bb = shrinkzero(b);
        couple[aa] = bb;
        couple[bb] = aa;
    }
    int m;
    cin >> m;
    while ( m-- )
    {
        string t;
        cin >> t;
        present.push_back(t);
    }
    for ( int i=0 ; i<present.size() ; i++ )
    {
        string s=present[i];
        int ss = shrinkzero(s);
        int co = -1;
        if ( couple[ss] != -1 )
        {
            co = couple[ss];
        }
        else 
        {
            single.push_back(s);
            continue;
        }
        if (find(present.begin(),present.end(),co) == present.end())
        {
            single.push_back(s);
        }
    }
    return 0;
}