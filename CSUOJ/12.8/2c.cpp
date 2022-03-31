#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    while ( ~scanf("%d %d",&n,&k) )
    {
        int num=1;
        int i=1;
        vector<int>p(n+1);
        // for ( int i=1 ; i<=n ; i++ )
        // {
        //     p.push_back(i);
        // }
        int cnt = n;
        // while ( 1 )
        // {
        //     // int size = p.size();
            
        //     break;
        // }
        for (i;; i++)
        {

            if (i > n)
                i = 1;
            if (p[i] == 0)
            {
                if (num == k)
                {
                    p[i] = 1;
                    num = 1;
                    cnt--;
                }
                else
                {
                    num++;
                }
            }

            // if (i == size)
            // {
            //     p.remove(i);
            // }
            //p.remove(i)
            if (cnt == 1)
                break;
            // int cnt=0;
            // for ( int j=1 ; j<n+1 ; j++ )
            // {
            //     if ( p[j] == 0 ) cnt++;
            // }
            // if ( cnt < k ) break;
        }
        for ( int i=1 ; i<=n ; i++ )
        {
            if ( p[i] == 0 ) printf("%d ",i);
        }
        cout << endl;
    }
    
    return 0;
}