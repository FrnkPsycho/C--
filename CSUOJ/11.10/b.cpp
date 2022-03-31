#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    vector<int>num(4);
    while ( scanf("%d%d%d%d",&num[0],&num[1],&num[2],&num[3]) != EOF )
    {
        int flag=0;
        sort(num.begin(),num.end());
        for ( int i=0; i+2<4 ; i++ )
        {
            int j=i+1;
            if ( num[i] + num[j] > num[j+1] )
            {
                flag = 2;
                break;
            }
            else if ( num[i] + num[j] == num[j+1] )
            {
                flag = 1;
            }
            
        }
        if ( flag == 2 ) 
        {
            cout << "Happy" <<endl;
        }
        else if ( flag == 1 )
        {
            cout << "Sad" <<endl;
        }
        else if ( flag == 0 ) 
        {
            cout << "Very Sad" <<endl;
        }
    }

    return 0;
}