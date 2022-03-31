#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    
    while ( cin >> n )
    {
        long long base = 9,digit = 1;
        while(n - base * digit > 0)
        {
            n -= base * digit;
            base *= 10;
            digit++;
        } // 位数

        int index = n % digit;
        if(index == 0)
            index = digit;
            
        long long num = 1;
        for(int i = 1; i < digit; i++){
            num *= 10;
        }
        if ( index == digit ) num += n / digit - 1;
        else num += n / digit;

        for(int i = index; i < digit; i++)
            num /= 10;
        
        cout << num % 10 << endl;

    }
    return 0;
}