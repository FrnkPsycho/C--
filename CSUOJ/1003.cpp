#include <bits/stdc++.h>

using namespace std;
int map[21][21];
int book[21][21];
int go[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};



int main()
{
    int i,j,t,n,x,y;
    char temp;
    while ( scanf("%d %d") != EOF )
    {
        cin >> y >> x;
        for ( int k=1 ; k<y ; k++ )
        {
            for ( int l=1 ; l<x ; l++ )
            {
                cin >> temp;       
                if ( temp == '.' ) map[k][l] = 0;

            }
    }
    }
    
    return 0;
}