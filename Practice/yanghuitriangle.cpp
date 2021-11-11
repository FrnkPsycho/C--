#include <bits/stdc++.h>

using namespace std;
/*****
 *    1
 *   1 1   
 *  1 2 1
 * 1 3 3 1
  1 4 6 4 1
*/

int main()
{
    int n;
    cin >> n;
    int space = n-1;
    vector<vector<int>>tri(1000);
    for (int i=0 ; i<1000 ; i++ ) tri[i].resize(1000);
    for ( int i=0 ; i<n ; i++ )
    {
        tri[i][0] = tri[i][i] = 1;
    }
    for ( int i=2 ; i<n ; i++ )
    {
        for ( int j=1 ; j<i ; j++ )
        {
            tri[i][j] = tri[i-1][j-1] + tri[i-1][j];
        }
    }
    int k,m;
        for (k = 0; k < n; k++)
        {
            for (int j = 0; j < n-k ; j++)
            {
                cout << "   ";
            }

            for (m = 0; m < k + 1; m++)
            {
                printf("%6d",tri[k][m]);
                // cout << tri[k][m] << "    ";
            }
            cout << endl;
        }
    
    return 0;
}