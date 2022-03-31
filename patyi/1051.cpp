#include <bits/stdc++.h>

using namespace std;

int main()
{
    double r1,p1,r2,p2;
    cin >> r1>>p1>>r2>>p2;
    double re,p;
    re = r1*r2;
    p = p1+p2;
    double rre = re * cos(p);
    double rp = re * sin(p);

    if ( rre > -0.005 && rre < 0) printf("0.00");
    else printf("%.2f",rre);

    if ( rp > -0.005 && rp < 0) printf("+0.00");
    else if ( rp >= 0 ) printf("+%.2f",rp);
    else printf("%.2f",rp);
    cout << "i" << endl;
    return 0;
}