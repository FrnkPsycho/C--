#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    freopen("1044.in","r",stdin);
    int i,j,t,n,carry;
    string str;
    vector<string>mar;
    vector<int>earth;
    bool flag = false; // true:str false:number
    cin >> t;
    getchar();
    while ( t-- )
    {
        getline(cin,str);
        for ( i=0; i<str.length() ; i++ )
        {
            if ( isdigit( str[i] ) ) flag = false;
            else flag = true;
        }
        if ( flag )
        {
            mar.push_back(str);
        }
        else
        {
            int temp = stoi(str);
            earth.push_back(temp);
        } 
    }

    fclose(stdin);
    return 0;
}