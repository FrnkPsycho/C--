#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

struct Node
{
    int code;
    vector<int>num;
};

int main()
{
    ll t;
    while ( cin >> t )
    {
        list<Node>member;
        list<Node>temp;
        int code,num;
        int code2,num2;
        scanf("%d,%d->%d,%d",&code,&num,&code2,&num2);
        Node a,b;
        a.code = code;
        a.num.push_back(num);
        b.code = code2;9
        b.num.push_back(num2);
        member.push_front(b);
        member.push_front(a);
        t--;
        while ( t-- )
        {
            scanf("%d,%d->%d,%d", &code, &num, &code2, &num2);
            Node a, b;
            a.code = code;
            a.num.push_back(num);
            b.code = code2;
            b.num.push_back(num2);
            list<Node>::iterator it = member.begin();
            for ( it ; it!=member.end() ; it++)
            {
                if ( *it)
            }
        }
    }
    return 0;
}