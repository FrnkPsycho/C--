#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    while ( ~scanf("%d",&t) )
    {
        while ( t-- )
        {
            int n;
            vector<int>num;
            scanf("%d",&n);
            while ( n-- )
            {
                int temp;
                scanf("%d",&temp);
                auto k = find(num.begin(), num.end(), temp) ;
                if ( k != num.end() )
                {
                    continue;
                }
                else
                {
                    num.push_back(temp);
                }
            }
            for ( int i=0 ; i<num.size() ; i++ )
            {
                printf("%d ",num[i]);
            }
            printf("\n");
        }
    }
    return 0;
}