#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

int BinarySearch(int array[], int x, int N)
{
    int Low, Mid, High;
    Low = 0; High = N-1;
    while ( Low <= High ) {
        Mid = ( High + Low ) / 2;
        if ( array[Mid] < x )
        {
            Low = Mid + 1;
        }
        else if ( array[Mid] > x )
        {
            High = Mid - 1;
        }
        else return Mid;
    }
    return -1;
}

int main()
{
    int a[6] = {1,3,6,10,55,90};
    cout << BinarySearch(a,55,6);
    return 0;
}