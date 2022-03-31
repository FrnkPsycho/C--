#include <stdio.h>
#include <string.h>

int main()
{
    char a[10001] = {'\0'};
    char b[10001] = {'\0'};
    int num[10001] = {0};
    while ( scanf("%s %s",&a,&b)!=EOF )
    {

        int lena = strlen(a) - 1;
        int lenb = strlen(b) - 1;

        int index=0;
        int carry=0;
        while ( lena >= 0 && lenb >= 0)
        {
            int sum = (a[lena] - '0') + (b[lenb] - '0') + carry;
            carry = 0;
            if ( sum >= 10 )
            {
                carry = sum/10;
                sum %= 10;
            }
            num[index++] = sum;
            lena--;
            lenb--;
        }

        // 较长的数继续遍历接下来的位数
        while ( lena >=0 )
        {
            int sum = (a[lena] - '0') + carry;
            carry = 0;
            if (sum >= 10)
            {
                carry = sum / 10;
                sum %= 10;
            }
            num[index++] = sum;
            lena--;
        }

        while (lenb >= 0)
        {
            int sum = (b[lenb] - '0') + carry;
            carry = 0;
            if (sum >= 10)
            {
                carry = sum / 10;
                sum %= 10;
            }
            num[index++] = sum;
            lenb--;
        }

        if ( carry > 0 ) num[index++] = carry; //最高位若有进位

        // output
        printf("%s + %s = ",a,b);
        while ( index-- )
        {
            printf("%d",num[index]);
        }
        printf("\n");
        
        memset(a,'\0',sizeof(char)*10001);
        memset(b, '\0', sizeof(char) * 10001);
        memset(num, 0, sizeof(int) * 10001);
    }   
    return 0;
}