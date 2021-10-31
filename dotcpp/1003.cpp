#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string a;
    getline(cin,a);
    for ( char i : a ) 
    {
        i += (char)4;
        cout << i;
    }
    return 0;
}