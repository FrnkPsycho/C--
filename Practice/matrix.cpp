#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int ln = t;
    int col = t;
    vector<vector<int>>matrix(ln);
    for ( int i=0 ; i<matrix.size();i++)
    {
        matrix[i].resize(col);
    }
    for ( int i=0 ; i<ln ; i++ )
    {
        for ( int j=0 ; j<col ; j++ )
        {
            cin >> matrix[i][j];
        }
    }
    for ( int i=0 ; i<col ; i++ )
    {
        for ( int j=0 ; j<ln ; j++ )
        {
            cout << matrix[j][i] << " " ;
        }
        cout << endl;
    }
    return 0;
}