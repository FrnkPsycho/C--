#include <bits/stdc++.h>
#include <string>
using namespace std;

string str;
string dict1[13] = {"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};
string dict2[13] = {"","tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};
    
void mars()
{
    string str1 = str.substr(0,3);
    string str2;
    int res=0;
    int d1=0,d2=0;
    if ( str.length() > 4 ) str2 = str.substr(4,3);
    for ( int i=1 ; i<=12 ; i++ )
    {
        if ( str1 == dict1[i] || str2 == dict1[i] )
            d2 = i;
        if ( str1 == dict2[i] )
            d1 = i;
    }
    cout << d1*13 + d2 << endl;
}

void earth(int n)
{
    if ( n==0 ) 
    {
        cout << "tret" << endl;
        return;
    }
    int b = n % 13;
    int a = n / 13;
    if ( b == 0 ) cout << dict2[a] << endl;
    else if ( a > 0 ) cout << dict2[a] << " " << dict1[b] << endl; 
    else cout << dict1[b] << endl;
}

int main()
{
    // freopen("1044.in","r",stdin);
    int i,j,t,n,carry; // true:str false:number
    cin >> t;
    getchar();
    while ( t-- )
    {
        getline(cin,str);
        for ( i=0; i<str.length() ; i++ )
        {
            if ( isdigit( str[i] ) ) 
            {
                int n = stoi(str);
                earth(n);
                break;
            }
            else
            {
                mars();
                break;
            }
        }
    }
    // fclose(stdin);
    return 0;
}