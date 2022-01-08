#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

void inplace_swap(int *x , int *y)
{
    *y = *x^*y;
    *x = *x^*y;
    *y = *x^*y;
}

void swap_array(int a[], int cnt)
{
    for ( int i=0, j=cnt-1 ; i<=j ; i++,j--)
    {
        if ( i==j ) break;
        inplace_swap(&a[i],&a[j]);
    }
}

int main()
{
    int a[5] = {1,2,3,4,5};
    swap_array(a,5);
    printf("\n");
    return 0;
}