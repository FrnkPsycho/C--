#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

struct student
{
    int id;
    string name;
    int a,b,c;
    int s;
};

bool cmp(student a, student b)
{
    if ( a.s == b.s ) return a.id < b.id;
    else return a.s > b.s;
}

int main()
{
    ll t;
    cin >> t;
    vector<student>stu;
    while ( t-- )
    {
        int id = 1;
        student temp;
        temp.id = id;
        id++;
        cin >> temp.name;
        cin >> temp.a >> temp.b >> temp.c;
        temp.s = temp.a+temp.b+temp.c;
        stu.push_back(temp);
    }
    sort(stu.begin(),stu.end(),cmp);
    cout << stu[0].name << " " << stu[0].a << " " << stu[0].b << " " << stu[0].c;
    
    return 0;
}