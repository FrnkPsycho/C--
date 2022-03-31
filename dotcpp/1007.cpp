#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cin >> x;
    if ( x < 1 ) y=x;
    else if ( x>=1 && x<10 ) y=2*x - 1;
    else if ( x>=10 ) y=3*x - 11;
    cout << y;
    return 0;
    
}