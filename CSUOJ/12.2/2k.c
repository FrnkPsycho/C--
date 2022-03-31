#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define ll long long
#define PI 3.1415926

int main()
{
    double x0,y0,z0,x1,y1,z1;
    while ( scanf("%lf%lf%lf%lf%lf%lf",&x0,&y0,&z0,&x1,&y1,&z1) != EOF )
    {
        double dx,dy,dz;
        dx = x1-x0;
        dy = y1-y0;
        dz = z1-z0;
        double r = sqrt( dx*dx + dy*dy + dz*dz );
        double v = r*r*r*acos(-1)*4.0/3.0;
        printf("%.3f %.3f\n",r,v);
    }
    return 0;
}