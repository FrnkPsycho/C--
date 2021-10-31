#include <iostream>

using namespace std;

int main()
{
    int n;
    int y[55] = {1,2,3,4};
    while (cin >> n&&n!=0)
    {
        for ( int i=4 ; i<n ; i++ )
        {
            y[i] = y[i-1] + y[i-3];
        }
        cout << y[n-1] << endl;
    }
    

    return 0;
}