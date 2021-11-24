#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while ( t-- )
    {
        int n;
        cin >> n;
        int top = n-1;
        int up_layer = n/2-1;
        int down_layer = n/2-1;
        int up_sand = n-5;
        for ( int i=0 ; i<top ; i++ ) cout << "-";
        cout << endl;
        // top
        cout << "\\";
        for ( int i=0 ; i<top-2 ; i++ ) cout << " ";
        cout << "/" << endl;
        
        int space=1;
        for ( int i=0 ; i<up_layer-1 ; i++ )
        {
            for ( int s=0 ; s<space ; s++ ) cout << " ";
            cout << "\\";
            for ( int j=0 ; j<up_sand ; j++ )
            {
                cout << "*";
            }
            up_sand-=2;
            cout << "/";
            for ( int s=0 ; s<space ; s++ ) cout << " ";
            space++;
            cout << endl;
        }
        space--;
        int inside_space=0;
        for ( int i=0 ; i<down_layer ; i++ )
        {
            for ( int s=0 ; s<space ; s++ ) cout << " ";
            cout << "/";
            for ( int j=0 ; j<inside_space ; j++ )
            {
                cout << " ";
            }
            cout << "*";
            for (int j = 0; j < inside_space; j++)
            {
                cout << " ";
            }
            cout << "\\";
            for ( int s=0 ; s<space ; s++ ) cout << " ";
            space--;
            inside_space++;
            cout << endl;
        }
        for (int i = 0; i < top; i++)
            cout << "-";
        cout << endl;
        cout << endl;
    }
    
    return 0;
}