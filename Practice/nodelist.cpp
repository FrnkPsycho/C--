#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

struct Node
{
    int value;
    Node *next;
};

// struct TwoDirNode
// {
//     int value;
//     TwoDirNode *left;
//     TwoDirNode *right;
// };

void insertNode(int value, Node *p)
{
    Node *node = new Node;
    node->value = value;
    node->next = nullptr;
    if ( p == nullptr )
    {
        p = node;
        node->next = node;
    }
    else
    {
        node->next = p->next;
        p->next = node;
    }
}

int main()
{
    ll t;
    Node p;
    p.value = 1;
    while (1)
    {
        int v;
        cin >> v;
        insertNode(v,&p);
    }
    return 0;
}