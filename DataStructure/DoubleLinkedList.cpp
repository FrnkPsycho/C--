#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;
typedef int64_t ElementType;

struct Node
{
    ElementType Element;
    Position Prev;
    Position Next;
};

List CreateEmptyList();
bool isEmpty(List L);
bool isLast(Position P);
Position FindElement(List L, ElementType X);
Position FindPrevious(List L, ElementType X);
void DeleteElement(List L, ElementType X);
void InsertElement(List L, ElementType X, Position P);
void DeleteList(List L);
Position ListHead(List L);
Position ListTail(List L);
void PrintList(List L);
void AllocateError();

List CreateEmptyList()
{
    List Head;
    Head = (List)malloc(sizeof(List));
    if (Head == nullptr)
        return nullptr;
    else
    {
        Head->Next = nullptr;
        Head->Prev = nullptr;
        return Head;
    }
}

bool isEmpty(List L)
{
    return L->Next == nullptr;
}

bool isLast(Position P)
{
    return P->Next == nullptr;
}

Position FindElement(List L, ElementType X)
{
    if (!isEmpty(L))
    {
        Position P = L->Next;
        while (P != nullptr && P->Element != X)
        {
            P = P->Next;
        }
        return P;
    }
    else
        return nullptr;
}

Position FindPrevious(List L, ElementType X)
{
    if (!isEmpty(L))
    {
        Position P = L;
        while (P->Next != nullptr && P->Next->Element != X)
        {
            P = P->Next;
        }
        return P;
    }
    else
        return nullptr;
}

void DeleteElement(List L, ElementType X)
{
    Position P = FindPrevious(L, X);
    if (!isLast(P))
    {
        Position TempNode = P->Next;
        P->Next = TempNode->Next;
        TempNode->Next->Prev = P;
        free(TempNode);
    }
}

void InsertElement(List L, ElementType X, Position P)
{
    Position NewNode = (Position)malloc(sizeof(Node));
    if (NewNode == nullptr)
        return;
    if ( P->Next == nullptr ) {
        P->Next = NewNode;
        NewNode->Prev = P;
    }
    else {
        NewNode->Next = P->Next;
        NewNode->Next->Prev = NewNode;
        P->Next = NewNode;
        NewNode->Prev = P;
    }
}

void DeleteList(List L)
{
    Position P, Temp;
    P = L->Next;
    L->Next = nullptr;
    while (P != nullptr)
    {
        Temp = P->Next;
        free(P);
        P = Temp;
    }
}

Position ListHead(List L)
{
    return L;
}

Position ListTail(List L)
{
    Position P = L;
    while (P->Next != NULL)
    {
        P = P->Next;
    }
    return P;
}

void PrintList(List L)
{
    Position P = L->Next;
    while (P != nullptr)
    {
        cout << P->Element << " <-> ";
        P = P->Next;
    }
    cout << "NULL" << endl;
}

void AllocateError()
{
    cout << "stupid";
}

int main()
{
    List l = CreateEmptyList();
    InsertElement(l, 1, ListTail(l));
    InsertElement(l, 3, ListTail(l));
    InsertElement(l, 5, ListTail(l));
    InsertElement(l, 7, ListTail(l));
    InsertElement(l, 2, ListTail(l));
    InsertElement(l, 4, ListTail(l));
    InsertElement(l, 6, ListTail(l));
    PrintList(l);
    DeleteElement(l, 3);
    PrintList(l);
    DeleteElement(l, 1);
    PrintList(l);
    DeleteElement(l, 6);
    PrintList(l);
    return 0;
}