#include <iostream>
#include <cstring>
#include <cstdio>
#include <string>
#define MAXN 1005
using namespace std;
struct BigNumber
{
    int d[MAXN], len;
    BigNumber()
    {
        memset(d, 0, sizeof d);
        len = 1;
    }
    void clean()
    {
        while (len > 1 && d[len] == 0) len--;
    }
    BigNumber operator=(const char *num) 
    {
        memset(d, 0, sizeof d);
        len = strlen(num);
        for (int i = 0; i < len; i++) 
        {
            d[i] = num[len - i - 1] - '0';
            
        }
        clean();
        return *this;
    }
    BigNumber operator=(const int num) 
    {
        char t[20];
        sprintf(t, "%d", num);
        *this = t;
        return *this;
    }
    BigNumber operator+(const BigNumber &b) 
    {
        BigNumber c = *this;
        int i;
        for (i = 0; i < b.len; i++) 
        {
            c.d[i] += b.d[i];
            if (c.d[i] >= 10) c.d[i] %= 10, c.d[i + 1]++;
        }
        while (c.d[i] >= 10) c.d[i] %= 10, c.d[i + 1]++, i++;
        c.len = max(len, b.len);
        if (c.d[i] != 0 && c.len != i + 1) c.len = i + 1;
        c.clean();
        return c;
    }
    BigNumber operator-(const BigNumber &b) 
    {
        BigNumber c = *this;
        int i;
        for (i = 0; i < b.len; i++) 
        {
            c.d[i] -= b.d[i];
            if (c.d[i] < 0) c.d[i] += 10, c.d[i + 1]--;
        }
        while (c.d[i] < 0) c.d[i] += 10, c.d[i + 1]--, i++;
        c.len = max(len, b.len);
        c.clean();
        return c;
    }
    BigNumber operator*(const BigNumber &b) 
    {
        BigNumber c;
        c.len = b.len + len;
        for (int i = 0; i < b.len; i++) 
        {
            for (int j = 0; j < len; j++) 
            {
                c.d[i + j] = d[j] * b.d[i];
            }
        }
        for (int i = 0; i < c.len; i++) 
        {
            c.d[i + 1] += c.d[i] / 10;
            c.d[i] %= 10;
        }
        c.clean();
        return c;
    }
    string str() 
    {
        char res[MAXN] = {};
        for (int i = 0; i < len; i++) 
        {
            res[i] = d[len - 1 - i] + '0';
        }
        return string(res);
    }
};
int main()
{
    BigNumber a;
    BigNumber b;
    char as[MAXN];
    char bs[MAXN];
    scanf("%s",&as);
    scanf("%s",&bs);
    a = as, b = bs;
    for (int i = 0; i < 100; i++) 
    {
        a = a + b;
        cout << a.str() << endl;
    }
}