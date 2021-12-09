#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a1,b1,a2,b2;
    
    map<string, int> map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six",6}, {"seven",7}, {"eight",8}, {"nine",9}};
    
    while ( cin >> a1 )
    {
        vector<string> p;
        string temp = " ";
        int a = 0, b = 0;
        p.push_back(a1);
        while ( temp != "=" )
        {
            cin >> temp;
            p.push_back(temp);
        }
        if ( p[0] == "zero" && p[2] == "zero")
        {
            break;
        }
        int i=0;
        a += map[p[i++]];
        if ( p[i] != "+" )
        {
            a*=10;
            a+=map[p[i++]];
        }
        i++;
        b += map[p[i++]];
        if ( p[i] != "=" )
        {
            b*=10;
            b+=map[p[i]];
        }
        p.clear();
        cout << a+b << endl;
        
    }
    return 0;
}