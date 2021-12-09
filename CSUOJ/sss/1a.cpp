#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while ( t-- )
    {
        string dice;
        int speak;
        int dices[7] = {0};
        cin >> dice >> speak;
        for ( int i=0 ; i<6 ; i++ )
        {
            int temp = dice[i] - '0' ;
            dices[temp] ++;
        }
        for ( int i=1 ; i<=speak ; i++ )
        {
            int n,k;
            cin >> n >> k;
            if ( k==1 )
            {
                if ( dices[k] >= n )
                {
                    cout << i << ":true" << endl;
                }
                else
                {
                    cout << i << ":false" << endl;
                }
            }
            else
            {
                if ( dices[k] + dices[1] >= n )
                {
                    cout << i << ":true" << endl;
                } 
                else
                {
                    cout << i << ":false" << endl;
                }
            }
        }
        cout << endl;
    }
    return 0;
}