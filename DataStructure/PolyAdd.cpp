#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;

struct Node
{
    double coef;
    int exp;
    Position Next;
};

List CreateEmptyList();
List AddPoly(List A, List B);
void InsertElement(List L, double coef, int exp);
void PrintList(List L);

List CreateEmptyList()
{
    List Head;
    Head = (List)malloc(sizeof(List));
    if (Head == nullptr)
        return nullptr;
    else
    {
        Head->Next = nullptr;
        return Head;
    }
}

List AddPoly(List A, List B) {
    Position qa = A->Next;
    Position qb = B->Next;
    Position delp;
    List C,R;
    R = C = A;
    while ( qa != nullptr && qb != nullptr ) {
        if ( qa->exp == qb->exp ) {
            double temp = qa->coef + qb->coef;
            if ( temp != 0 ) {
                qa->coef = temp;
                R = qa; 
                delp = qb;
                qb = qb->Next;
                qa = qa->Next;
                free(delp);
            }
            else {
                R->Next = qa->Next;
                delp = qa;
                qa = qa->Next;
                free(delp);
                delp = qb;
                qb = qb->Next;
                free(qb);
            }
        }
        else if ( qa->exp < qb->exp ) {
            R = qa;
            qa = qa->Next;
        }
        else {
            R->Next = qb;
            R = qb;
            qb = qb->Next;
            R->Next = qa;
        }
    }
    if ( qa == nullptr ) R->Next = qb;
    return C;
}

void InsertElement(List L, double coef, int exp)
{
    Position NewNode = (Position)malloc(sizeof(Node));
    if (NewNode == nullptr)
        return;
    Position Tail = L;
    while ( Tail->Next != nullptr ) Tail = Tail->Next;
    NewNode->coef = coef;
    NewNode->exp = exp;
    NewNode->Next = Tail->Next;
    Tail->Next = NewNode;
}

void PrintList(List L)
{
    Position P = L->Next;
    while (P != nullptr)
    {
        printf("%.1fx^%d",fabs(P->coef),P->exp);
        if ( P->Next != nullptr ) {
            if ( P->Next->coef > 0 ) printf(" + ");
            else if ( P->Next->coef < 0 ) printf(" - ");
        }
        P = P->Next;
    }
    cout << endl;
}

int main()
{
    List a = CreateEmptyList();
    List b = CreateEmptyList();
    InsertElement(a, 7, 0);
    InsertElement(a, 3, 1);
    InsertElement(a, 9, 8);
    InsertElement(a, 5, 17);
    InsertElement(b, 8, 1);
    InsertElement(b, 22, 7);
    InsertElement(b, -9, 8);
    PrintList(a);
    PrintList(b);
    List C = AddPoly(a, b);
    PrintList(C);
    return 0;
}