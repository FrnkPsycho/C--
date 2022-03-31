#include <bits/stdc++.h>
#define ll long long
#define MAX 1000

using namespace std;

void to_arr(int a[] , string str, bool rev = true) // 参数： 数组，字符串，是否反转存储
{
    if ( rev ) for ( int i=str.length()-1,j=0 ; i>=0 ; i--,j++ ) a[j] = str[i] - '0';
    else for (int i = 0; i < str.length(); i++) a[i] = str[i] - '0';
}

void greatplus(int a[], int lena, int b[], int lenb ) // 只能处理a比b等长或更长
{
    int i=0;
    for ( i=0 ; i<lena ; i++ )
    {
        a[i] = a[i] + b[i];
        if ( a[i] >= 10 )
        {
            a[i+1] += a[i] / 10;
            a[i] %= 10;
        }
    }
    if ( a[i] >= 10 )
    {
        a[i + 1] += a[i] / 10;
        a[i] %= 10;
    }
}
void greatminus(int a[], int lena, int b[], int lenb) // 只能处理 a>b b>a的话在调用时调换a,b位置最后加上符号
{
    int i=0;
    for ( i=0; i<lena ; i++ )
    {
        a[i] = a[i] - b[i];
        if (a[i] < 0)
        {
            a[i+1]--;
            a[i] += 10;
        }
    }
}
void greatmultiply(int a[], int lena, int b[], int lenb)
{
    int c[MAX] = {0};
    for ( int i=0 ; i<lena ; i++ )
    {
        for ( int j=0 ; j<=i ; ++j )
        {
            c[i] += a[j] * b[i-j];
        }
        if ( c[i] >= 10 )
        {
            c[i+1] += c[i] / 10;
            c[i] %= 10;
        }
    }
    memset(a,0,MAX);
    memcpy(a,c,MAX);
}
// void divide(int a[], int b[])
// void mod(int a[], int b[])
// {

// }

int a[MAX] = {0};
int b[MAX] = {0};

int main()
{
    string as,bs;
    cin >> as >> bs;
    to_arr(a,as);
    to_arr(b,bs);
    // greatplus(a,as.length(),b,bs.length());
    // for ( int i=as.length()-1 ; i>=0 ; i-- )
    // {
    //     cout << a[i];
    // }
    // bool nega = greatminus(a,as.length(),b,bs.length());
    // greatminus(b,bs.length(),a,as.length());
    greatmultiply(a, as.length(), b, bs.length());

    printf("a");
    return 0;
}