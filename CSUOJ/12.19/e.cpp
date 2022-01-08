#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

int main()
{
    vector<vector<long long>>tri(30);
    for (int i=0 ; i<30 ; i++ ) tri[i].resize(30);
    vector<long long>prime;
    int k=0;
    prime.push_back(2);
    prime.push_back(3);
    for (int i = 4; prime.size() <= 500; i++)
    {
        for (int j = 2; j <= (int)sqrt(i); j++)
        {
            if (i % j == 0)
            {
                // prime[k++] = i;
                break;
            }
            else if ( j==(int)sqrt(i) )
            {
                prime.push_back(i);
            }
        }
    }

    int n;
    while ( cin >> n )
    {
        for (int i = 0; i < n; i++)
        {
            tri[i][0] = tri[i][i] = 1;
        }
        for (int i = 2; i < n; i++)
        {
            for (int j = 1; j < i; j++)
            {
                tri[i][j] = tri[i - 1][j - 1] + tri[i - 1][j];
            }
        }
        int m = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (tri[i][j] == 0)
                {
                    tri[i][j] = prime[m++];
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << tri[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        for (int i = 0; i < 30; i++)
            tri[i].clear();
        for (int i = 0; i < 30; i++)
            tri[i].resize(30);
    }
    
    return 0;
}