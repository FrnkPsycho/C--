#include <bits/stdc++.h>

using namespace std;

int main()
{
    string pw;
    int max;
    cin >> pw >> max;
    getchar();
    int trys=max;
    while ( trys-- )
    {
        string t;
        getline(cin,t);
        if ( t == "#" ) return 0;
        if ( t == pw )
        {
            cout << "Welcome in" << endl;
            return 0;
        }
        else cout << "Wrong password: " << t << endl;
        if ( trys==0 )
        {
            cout << "Account locked" << endl;
        }
    }
    
    return 0;
}