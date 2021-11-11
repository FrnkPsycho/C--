#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a,b;
    int flag = 1;
    cin >> a >> b;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    int lena = a.length();
    int lenb = b.length();
    if ( lena > lenb ) b.append(lena - lenb,'0');
    else a.append(lenb-lena,'0');
    
    for ( int i=0 ; i<a.length() ; i++ )
    {
        if ( flag % 2 != 0 ) 
        {
            int temp;
            temp = ((b[i] - '0') + (a[i]-'0')) % 13;
            if ( temp == 10 ) b[i] = 'J';
            else if ( temp == 11 ) b[i] = 'Q';
            else if ( temp == 12 ) b[i] = 'K';
            else b[i] = temp + '0';
            flag++;
        }
        else
        {
            int temp;
            temp = ((b[i] - '0') - (a[i] - '0'));
            if ( temp < 0 ) temp +=10;
            b[i] = temp + '0';
            flag++;
        }
    }
    reverse(b.begin(),b.end());
    cout << b << endl;
    return 0;
}