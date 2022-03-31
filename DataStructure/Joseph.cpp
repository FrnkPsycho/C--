#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

typedef struct LNode
{
    int Number;
    struct LNode *Next;
} LNode, *List;

void CreateList(List &L, int n)
{
    int i;
    List p = nullptr, q;
    L = (List)malloc(sizeof(LNode)); //生成头节点
    L->Next = nullptr;
    q = L;
    for (i = 1; i <= n; i++)
    {

        p = (List)malloc(sizeof(LNode));
        p->Number = i;
        q->Next = p;
        q = q->Next;
    }
    p->Next = L->Next;
}
void PrintList(List &L, int k, int n)
{
    int j = 0, i;
    List p = L, q, t;
    for (i = 1; i <= n; ++i)
    {
        for (j = 0; j < k; ++j)
        {

            t = p;
            p = p->Next;
        }
        cout << p->Number << " ";
        p = t;
        q = p->Next;
        p->Next = q->Next;
    }
}
int main()
{

    List L;
    int n, m;
    cout << "输入N值:";
    cin >> n;
    cout << "输入m值:";
    cin >> m;
    CreateList(L, n);
    PrintList(L, m, n);
    return 0;
}