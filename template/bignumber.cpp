#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;
struct BigNumber
{
    int arr[MAX],len;
    BigNumber(){memset(arr,0,sizeof(arr));len=1;}
    void clean()
    {
        while (len > 1 && arr[len] == 0)
            len--;
    } 
    BigNumber operator= (const char *num)
    {
        memset(arr,0,sizeof(arr));
        len = strlen(num);
        for ( int i=0 ; i<len ; i++ )
        {
            arr[i] = num[len-i-1] - '0';
        }
        clean();
        return *this;
    }

    BigNumber operator= (const int num)
    {
        char temp[20];
        sprintf(temp,"%d",num);
        *this = temp;
        return *this;
    }

    BigNumber operator+ (const BigNumber &b)
    {
        BigNumber a = *this;
        int i;
        for (i = 0; i<b.len ; i++)
        {
            a.arr[i] += b.arr[i];
            if ( a.arr[i] >= 10 )
            {
                a.arr[i]%=10;
                a.arr[i+1]++;
                i++;
            }
        }
        while(a.arr[i] >= 10)
        {
            a.arr[i] %= 10;
            a.arr[i + 1]++;
            i++;
        }
        a.len = max(len,b.len);
        if (a.arr[i]!=0&&a.len!=i+1) a.len=i+1;
        a.clean();
        return a;
    }

    BigNumber operator- (const BigNumber &b)
    {
        BigNumber a=*this;int i;
        for ( i=0 ; i<b.len ; i++ )
        {
            a.arr[i] -= b.arr[i];
            if ( a.arr[i]<0 ) a.arr[i]+=10,a.arr[i+1]--;
        }
        while ( a.arr[i]<0 ) a.arr[i]+=10,a.arr[i+1]--;i++;
        a.len = max(len,b.len);
        a.clean();
        return a;
    }

    BigNumber operator* (const BigNumber &b)
    {
        BigNumber a;
        a.len = b.len + len;
        for ( int i=0 ; i<b.len ; i++ )
        {
            for ( int j=0 ; j<len ; j++ )
            {
                a.arr[i+j] = arr[j] * b.arr[i];
            }
        }
        for ( int i=0 ; i<a.len ; i++ )
        {
            a.arr[i+1] += a.arr[i] / 10;
            a.arr[i] %= 10;
        }
        a.clean();
        return a;
    }
    string out()
    {
        char res[MAX] = {};
        for ( int i=0 ; i<len ; i++ )
        {
            res[i] = arr[len-1-i] + '0';
        }
        return string(res);
    }
};
int main()
{
    BigNumber a;
    BigNumber b;
    a=1,b=2;
    // char stra[MAX] = {'\0'};
    // char strb[MAX] = {'\0'};
    // cin >> stra >> strb;
    // a = stra;
    // b = strb;
    a = a+b;
    cout << a.out() << endl;
    return 0;
}