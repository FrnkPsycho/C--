#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct stu
{
    string name;
    int num;
};

bool cmp ( stu x,stu y )
{
   if ( x.num != y.num ) return x.num>y.num;
   else return  x.name > y.name;
}

int main()
{
    vector<stu>st;
    for ( int i=0 ; i<5 ; i++ )
    {
        stu temp;
        cin >> temp.name >> temp.num;
        st.push_back(temp);
    }
    sort(st.begin(),st.end(),cmp);
    for ( auto i : st )
    {
        cout << i.name << " " << i.num << endl;
    }
    return 0;
}