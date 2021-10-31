#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    double f,c;
    cin >> f;
    c = 5.0 * (f-32.0) / 9.0;
    cout << "c=" << fixed << setprecision(2) << c << endl;
    return 0;
}