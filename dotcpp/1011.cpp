#include <iostream>

using namespace std;

int main()
{
    int a,b,at,bt,temp;
    cin >> at >> bt;
    a = at ; b = bt;
    while ( b != 0 )    
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    cout << a << " " << at*bt/a ; 
    return 0;
}