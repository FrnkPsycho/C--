#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m1,m2;
    while ( cin >> m1 >> m2 )
    {
        int r1=0, r2=0, r3=0;
        string command;
        cin >> command;
        for ( int i=0 ; i<command.length() ; i++ )
        {
            if ( command[i] == 'A' ) 
                r1=m1;
            else if (command[i] == 'B')
                r2 = m2;
            else if (command[i] == 'C')
                m1 = r3;
            else if (command[i] == 'D')
                m2 = r3;
            else if (command[i] == 'E')
            {
                r3 = r1+r2;
            }
            else if (command[i] == 'F')
                r3 = r1-r2;
    
        }
        cout << m1 << "," << m2 << endl;
    }

    
    return 0;
}