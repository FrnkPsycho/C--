#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    getline(cin,str);
    string com;
    cin >> com;
    getchar();
    if ( com[0] == 'D' )
    {
        char ch;
        cin >> ch;
        for ( int i=0 ; i<str.length() ; i++ )
        {
            if ( str[i] == ch ) 
            {
                str.erase(i,1);
                break;
            }
            if ( i==str.length()-1 )
            {
                cout << "Not exist" << endl;
                return 0;
            }
        }
        cout << str << endl;
    }
    else if ( com[0] == 'I' )
    {
        char ch,ins;
        cin >> ch ;
        getchar();
        cin >> ins;
        int li=-1;
        for ( int i=0 ; i<str.length() ; i++ )
        {
            if ( str[i] == ch ) li = i;
        }
        if ( li == -1 ) cout << "Not exist" << endl;
        else
        {
            string a,b;
            a = str.substr(0,li);
            b = str.substr(li,str.length()-1);
            cout << a << ins << b << endl;
        }
    }
    else if ( com[0] == 'R' )
    {
        char ch, rep;
        cin >> ch;
        getchar();
        cin >> rep;
        bool flag = false;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == ch)
            {
                flag = true;
                str[i] = rep;
            } 
        }
        if ( !flag ) cout << "Not exist" << endl;
        else cout << str << endl;
    }
    return 0;
}