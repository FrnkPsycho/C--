#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

int len1,len2;//记得初始化

void to_arr(int a[] , string str, bool rev = true) // 参数： 数组，字符串，是否反转存储
{
    if ( rev ) for ( int i=str.length()-1,j=0 ; i>=0 ; i--,j++ ) a[j] = str[i] - '0';
    else for (int i = 0; i < str.length(); i++) a[i] = str[i] - '0';
}

bool greatplus(int a[], int lena, int b[], int lenb) // 只能处理a比b等长或更长
{
    int i = 0;
    bool flag = false;
    for (i = 0; i < lena; i++)
    {
        a[i] = a[i] + b[i];
        if (a[i] >= 10)
        {
            a[i + 1] += a[i] / 10;
            a[i] %= 10;
        }
    }
    if (a[i] >= 10)
    {
        a[i + 1] += a[i] / 10;
        a[i] %= 10;
    }

    if ( a[i] > 0 )
    {
        len1 = i;
        return true;
    }
    else
    {
        len1 = i-1;
        return false;
    }
}

bool greatplus2(int a[], int lena, int b[], int lenb) // 只能处理a比b等长或更长
{
    int i = 0;
    bool flag=false;
    for (i = 0; i < lena; i++)
    {
        a[i] = a[i] + b[i];
        if (a[i] >= 10)
        {
            a[i + 1] += a[i] / 10;
            a[i] %= 10;
        }
    }
    if (a[i] >= 10)
    {
        a[i + 1] += a[i] / 10;
        a[i] %= 10;
    }
    if (a[i] > 0)
    {
        len2 = i;
        return true;
    }
    else
    {
        len2 = i-1;
        return false;
    }
}

int main()
{
    string a,b;
    while ( cin >> a >> b )
    {
        string azs,bzs;
        string axs,bxs;
        bool axs_valid = 0, bxs_valid = 0;
        for (int i=0 ; i<a.length() ; i++ )
        {
            if ( a[i] == '.' )
            {
                azs = a.substr(0,i);
                axs = a.substr(i+1,a.length()-1);
                axs_valid = 1;
                break;
            }
        }
        if ( axs_valid == 0 ) azs = a;
        for (int i = 0; i < b.length(); i++)
        {
            if (b[i] == '.')
            {
                bzs = b.substr(0, i);
                bxs = b.substr(i + 1, b.length() - 1);
                bxs_valid = 1;
                break;
            }
        }
        if (bxs_valid == 0)
            bzs = b;

        bool iscarry=0;
        bool cast = 0;

        int ax[405] = {0};
        int bx[405] = {0};
        int a[405] = {0};
        int b[405] = {0};
        if (azs.length() < bzs.length())
        {
            string t;
            t = bzs;
            bzs = azs;
            azs = t;
        }
        to_arr(a, azs);
        to_arr(b, bzs);
        cast = greatplus(a, azs.length(), b, bzs.length());

        if ( axs_valid && bxs_valid )
        {
            if (axs.length()<bxs.length() )
            {
                string t;
                t = bxs;
                bxs = axs;
                axs = t;
                
            }
            int d = axs.length() - bxs.length();
            for (int k = 0; k < d ; k++)
            {
                bxs = bxs + "0";
            }
            to_arr(ax,axs);
            to_arr(bx,bxs);
            iscarry = greatplus2(ax,axs.length(),bx,bxs.length());
            if ( iscarry )
            {
                a[0]++;
                len2--;
            }
        }
        int i=0;
        if ( a[i] >= 10 )
        {
            while (a[i] >= 10)
            {
                a[i + 1] += a[i] / 10;
                a[i++] %= 10;
            }
            if ( a[i+1] > 0 ) len1 = i+1;
            else len1 = i;
        }
        for (int i=len1; i >= 0; i--)
        {
            cout << a[i];
        }
        if ( axs_valid || bxs_valid )
        {
            if ( axs_valid && ! bxs_valid)
            {
                cout << ".";
                for (int i = 0; i <axs.length(); i++)
                {
                    cout << axs[i];
                }
            }
            else if ( !axs_valid && bxs_valid )
            {
                cout << ".";
                for (int i = 0; i <bxs.length(); i++)
                {
                    cout << bxs[i];
                }
            }
            else if ( axs_valid && bxs_valid )
            {
                int j = 0;
                for (j = 0; j <= len2; j++)
                {
                    if (ax[j] == 0)
                        continue;
                    else
                    {
                        break;  
                    }
                }
                if ( j<=len2 )
                {
                    cout << ".";
                    for (int i = len2; i >= j; i--)
                    {
                        cout << ax[i];
                    }
                }
            }
        }
        cout << endl;
        len1=0;len2=0;
   }
    return 0;
}