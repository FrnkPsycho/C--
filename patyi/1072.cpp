#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    map<string,bool>item;
    vector<string>shou;
    cin >> n >> m;
    for ( int i=0 ; i<m ; i++ )
    {
        string t;
        cin >> t;
        item[t] = true;
    }
    getchar();
    int pstu=0;
    for ( int i=0 ; i<n ; i++ )
    {
        string name;
        cin >> name;
        vector<string>stuitem;
        vector<string>deaditem;
        while ( true )
        {
            string t;
            cin >> t;
            stuitem.push_back(t);
            char k;
            k = getchar();
            if ( k == '\n' ) break;
        }
        for ( int j=0 ; j<stuitem.size() ; j++ )
        {
            if ( item[stuitem[j]] == true )
            {
                deaditem.push_back(stuitem[j]);
                shou.push_back(stuitem[j]);
            }
        }
        if ( deaditem.size() != 0 )
        {
            pstu++;
            cout << name << ":";
            for ( int j=0 ; j<deaditem.size() ; j++ )
            {
                cout << " " << deaditem[j];
            }
            cout << endl;
        }
    }

    cout << pstu << " " << shou.size() << endl;
    return 0;
}