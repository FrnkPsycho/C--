#include<stdio.h>
#include<string.h>
int s[500005];
int main ()
{
    int num,a,b,c,flag,last;
    scanf("%d",&num);
    while (num--)
    {
        last=0;
        flag=-1;
        scanf("%d%d",&a,&b);
        for (int i = 0; i < 500005; i++)
        {
            s[i]=0;
        }
          
        if (a%b)
        {
            printf("NO\n");
        }
        else
        {
            int p=0;
            int o=a;
            while (a--)
            {
                scanf("%d",&c);
                if (c==last+1)
                {
                    flag++;
                }
                s[flag]++;
                last=c;
            }
            if (s[flag])
            {
                flag++;
            }
            for (int j = 0; j < (o/b); j++)
            {
                int h=b,v=0;
                for (int i = 0; i < flag; i++)
                {
                    if (s[i]!=0)
                    {
                        s[i]--;
                        h--;
                        v=1;
                    }
                    if (!h)
                    {
                        break;
                    }
                    if (v&&(i+1!=flag)&&(!s[i+1]))
                    {
                        p=1;
                        break;
                    }
                      
                }
                if (h)
                {
                    p=1;
                    break;
                }
                  
            }
            for (int i = 0; i < flag; i++)
            {
                if (s[i])
                {
                    p=1;
                    break;
                }
            }
            if (p)
            {
                printf("NO\n");
            }
            else
            {
                printf("YES\n");
            }
        }
    }
      
    return 0;
}