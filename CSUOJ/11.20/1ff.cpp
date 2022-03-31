#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    
    while ( scanf("%d",&n)!=EOF )
    {
        int sum=0;
        int temp=n;
        while ( temp>0 )
        {
            int d = temp % 16;
            if ( d < 10 )
            {  
                sum+=d;
            }
            temp/=16;
        }
        cout << sum << endl;
        cin >> n;
    }
    
    return 0;
}