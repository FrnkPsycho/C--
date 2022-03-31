#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

int board[5][5];
int main()
{
    int k;
    cin >> k;
    while ( k-- )
    {
        for ( int i=1 ; i<5 ; i++ )
        {
            for ( int j=1 ; j<5 ; j++)
            {
                int t;
                cin >> t;
                board[i][j] = t;
            }
        }
        string com;
        cin >> com;
        
        if ( com == "LEFT" )
        {
            int i, j, k;
            for ( i=1 ; i<5 ; i++ )
            {
                for ( j=1 ; j<4 ; j++ )
                {
                    if ( board[i][j] == 0 && board[i][j+1] !=0 )
                    {
                        for ( k=j ; k<4 ; k++)
                        {
                            int t;
                            t = board[i][k];
                            board[i][k] = board[i][k+1];
                            board[i][k+1] = t;
                        }
                        j=0;
                    }
                }
            }
            for ( i=1 ; i<5 ; i++ )
            {
                for ( j=1 ; j<4 ; j++ )
                {
                    if ( board[i][j] == board[i][j+1] )
                    {
                        board[i][j]*=2;
                        board[i][j+1]=0;
                    }
                }
            }
            for (i = 1; i < 5; i++)
            {
                for (j = 1; j < 4; j++)
                {
                    if (board[i][j] == 0 && board[i][j + 1] != 0)
                    {
                        for (k = j; k < 4; k++)
                        {
                            int t;
                            t = board[i][k];
                            board[i][k] = board[i][k + 1];
                            board[i][k + 1] = t;
                        }
                        j=0;
                    }
                }
            }
        }
        else if ( com == "RIGHT")
        {
            int i, j, k;
            for (i = 4; i > 0; i--)
            {
                for (j = 4; j > 1; j--)
                {
                    if (board[i][j] == 0 && board[i][j - 1] != 0)
                    {
                        for (k = j; k > 1; k-- )
                        {
                            int t;
                            t = board[i][k];
                            board[i][k] = board[i][k - 1];
                            board[i][k - 1] = t;
                        }
                        j=5;
                    }
                }
            }
            for (i = 4; i > 0; i--)
            {
                for (j = 4; j > 1; j--)
                {
                    if (board[i][j] == board[i][j - 1])
                    {
                        board[i][j] *= 2;
                        board[i][j - 1] = 0;
                    }
                }
            }
            for (i = 4; i > 0; i--)
            {
                for (j = 4; j > 1; j--)
                {
                    if (board[i][j] == 0 && board[i][j - 1] != 0)
                    {
                        for (k = j; k > 1; k--)
                        {
                            int t;
                            t = board[i][k];
                            board[i][k] = board[i][k - 1];
                            board[i][k - 1] = t;
                        }
                        j = 5;
                    }
                }
            }
        }
        else if ( com == "DOWN" )
        {
            int i, j, k;
            for (j = 4; j > 0; j--)
            {
                for (i = 4; i > 1; i--)
                {
                    if (board[i][j] == 0 && board[i-1][j] != 0)
                    {
                        for (k = i; k > 1; k--)
                        {
                            int t;
                            t = board[k][j];
                            board[k][j] = board[k-1][j];
                            board[k-1][j] = t;
                        }
                        i = 5;
                    }
                }
            }
            for (j = 4; j > 0; j--)
            {
                for (i = 4; i > 1; i--)
                {
                    if (board[i-1][j] == board[i][j])
                    {
                        board[i][j] *= 2;
                        board[i-1][j] = 0;
                    }
                }
            }
            for (j = 4; j > 0; j--)
            {
                for (i = 4; i > 1; i--)
                {
                    if (board[i][j] == 0 && board[i-1][j] != 0)
                    {
                        for (k = i; k > 1; k--)
                        {
                            int t;
                            t = board[k][j];
                            board[k][j] = board[k - 1][j];
                            board[k - 1][j] = t;
                        }
                        i = 5;
                    }
                }
            }
        }
        else if ( com == "UP")
        {
            int i, j, k;
            for (j = 1; j < 5; j++)
            {
                for (i = 1; i < 4; i++)
                {
                    if (board[i][j] == 0 && board[i+1][j] != 0)
                    {
                        for (k = i; k < 4; k++)
                        {
                            int t;
                            t = board[k][j];
                            board[k][j] = board[k+1][j];
                            board[k+1][j] = t;
                        }
                        i=0;
                    }
                }
            }
            for (j = 1; j < 5; j++)
            {
                for (i = 1; i < 4; i++)
                {
                    if (board[i][j] == board[i+1][j])
                    {
                        board[i][j] *= 2;
                        board[i+1][j] = 0;
                    }
                }
            }
            for (j = 1; j < 5; j++)
            {
                for (i = 1; i < 4; i++)
                {
                    if (board[i][j] == 0 && board[i + 1][j] != 0)
                    {
                        for (k = i; k < 4; k++)
                        {
                            int t;
                            t = board[k][j];
                            board[k][j] = board[k + 1][j];
                            board[k + 1][j] = t;
                        }
                        i=0;
                    }
                }
            }
        }
        for (int i = 1; i < 5; i++)
        {
            for (int j = 1; j < 5; j++)
            {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        memset(board,0,sizeof(board));
    }
    
    return 0;
}