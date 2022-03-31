#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,t,n;
    string l;
    getline(cin,l);
    int book[6] = {0};
    bool flag = true;
    for ( i=0 ; i<l.length() ; i++ )
    {
        if ( l[i] == 'P') book[0]++;
        if ( l[i] == 'A') book[1]++;
        if ( l[i] == 'T') book[2]++;
        if ( l[i] == 'e') book[3]++;
        if ( l[i] == 's') book[4]++;
        if ( l[i] == 't') book[5]++;
    }
    while ( flag )
    {    
        flag = false;
        for ( i=0 ; i<6 ; i++ )
        {
            if ( book[i] > 0 )
            {
                flag = true;
                book[i]--;
                switch (i)
                {
                case 0:
                    
                    cout << "P";
                    continue;
                case 1:
                    
                    cout << "A";
                    continue;
                case 2:
                    
                    cout << "T";
                    continue;
                case 3:
                    
                    cout << "e";
                    continue;
                case 4:
                    
                    cout << "s";
                    continue;
                case 5:
                    
                    cout << "t";
                    continue;   
                default:
                    continue;
                }
            } 
        }
    }
    cout << endl;
    return 0;
}