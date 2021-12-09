#include <bits/stdc++.h>

using namespace std;

int m, n, tol;
int img[1001][1001];
int vis[20000000];

bool check(int i,int j)
{
    bool res = true;
    if ( i-1 != 0 ) res =  img[i][j] - img[i-1][j] > tol;
    if ( res == false ) return false;
    if ( i+1 != 0 ) res =  img[i][j] - img[i+1][j] > tol;
    if ( res == false ) return false;
    if ( j-1 != 0 ) res =  img[i][j] - img[i][j-1] > tol;
    if ( res == false ) return false;
    if ( j+1 != 0 ) res =  img[i][j] - img[i][j+1] > tol;
    if ( res == false ) return false;
    if ( i-1 != 0 && j-1 != 0 ) res = img[i][j] - img[i-1][j-1] > tol;
    if ( res == false ) return false;
    if ( i-1 != 0 && j+1 != 0 ) res = img[i][j] - img[i-1][j+1] > tol;
    if ( res == false ) return false;
    if ( i+1 != 0 && j-1 != 0 ) res = img[i][j] - img[i+1][j-1] > tol;
    if ( res == false ) return false;
    if ( i+1 != 0 && j+1 != 0 ) res = img[i][j] - img[i+1][j+1] > tol;
    if ( res == false ) return false;
    return res;
    // res = img[i][j] - img[i - 1][j] > tol;
    // if (res == false)
    //     return false;
    // res = img[i][j] - img[i + 1][j] > tol;
    // if (res == false)
    //     return false;
    // res = img[i][j] - img[i][j - 1] > tol;
    // if (res == false)
    //     return false;
    // res = img[i][j] - img[i][j + 1] > tol;
    // if (res == false)
    //     return false;
    // res = img[i][j] - img[i - 1][j - 1] > tol;
    // if (res == false)
    //     return false;
    // res = img[i][j] - img[i - 1][j + 1] > tol;
    // if (res == false)
    //     return false;
    // res = img[i][j] - img[i + 1][j - 1] > tol;
    // if (res == false)
    //     return false;
    // res = img[i][j] - img[i + 1][j + 1] > tol;
    // if (res == false)
    //     return false;
}

int main()
{

    cin >> m >> n >> tol;
    for ( int i=1 ; i<=n ; i++ )
    {
        for ( int j=1 ; j<=m ; j++ )
        {
            cin >> img[i][j];
            // vis[img[i][j]]++;
        }
    }
    bool unique = true;
    bool found = false;
    int max=0;
    int i,j;
    int ui,uj;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            bool k = check(i, j);
            if ( k )
            {
                if ( img[i][j] > max )
                {
                    vis[img[i][j]] = 1;
                    ui = i;
                    uj = j;
                    max = img[i][j];
                    unique = true;
                    found = true;
                }
                else if ( img[i][j] == max )
                {
                    unique = false;
                }
            }
        }
    }
    if ( found && unique ) printf("(%d, %d): %d\n",uj,ui,img[ui][uj]);
    else if ( found && !unique ) printf("Not Unique\n");
    else printf("Not Exist\n");
    
    return 0;
}