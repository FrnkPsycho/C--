#include <bits/stdc++.h>

using namespace std;

int couple[100001] = {-1};
int present[100001] = {0};

int shrinkzero(string str)
{
    if ( str == "00000" ) return 0;
    while ( str[0] == '0' ) str.erase(0,1);
    return stod(str);
}

int main()
{
    int n;
    vector<string>presentid;
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
        int tt = shrinkzero(t);
        present[tt] = 1;
        presentid.push_back(t);
    }
    for ( int i=0 ; i<presentid.size() ; i++ )
    {
        string s=presentid[i];
        int ss = shrinkzero(s);
        // int co = -1;
        if ( couple[ss] != -1 )
        {
            int co = couple[ss];
            if ( present[co] == 1 )
            {
                continue;
            }
        }
        single.push_back(s);
    }
    sort(single.begin(),single.end());
    cout << single.size() << endl;
    for ( int i=0 ; i<single.size() ; i++ )
    {
        cout << single[i];
        if ( i!=single.size()-1 ) cout << " ";
    }
    if (single.size() != 0 )cout << endl;
    return 0;
}