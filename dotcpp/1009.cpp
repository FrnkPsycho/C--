#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n,d,i=0;
    vector<int>digit;
    cin >> n;
    for ( i=0 ; n!=0 ; i++ )
    {
        d = n % 10;
        n /= 10;
        digit.push_back(d);
    }

    cout << i << endl;

    for ( auto p = digit.rbegin() ; p!=digit.rend() ; p++ )
    {
        cout << *p << " ";
    }

    cout << endl;

    for ( auto p = digit.begin() ; p!=digit.end() ; p++ )
    {
        cout << *p;
    }   
    
    return 0;
}