#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    map<int,string>eng = {{0,"zero"}, {1,"one"}, {2,"two"}, {3,"three"}, {4,"four"}, {5,"five"}, {6,"six"}, {7,"seven"}, {8,"eight"}, {9,"nine"}, {10,"ten"}, {11,"eleven"}, {12,"twelve"}, {13,"thirteen"}, {14,"fourteen"}, {15,"fifteen"}, {16,"sixteen"}, {17,"seventeen"}, {18,"eighteen"}, {19,"nineteen"}, {20,"twenty"},{30,"thirty"},{40,"forty"},{50,"fifty"}};
    int h,m;
    while ( cin >> h >> m )
    {
        if ( h > 20 )
        {
            int b = h % 10;
            int a = h - b;
            cout << eng[a] << " " << eng[b];
        }
        else
        {
            cout << eng[h];
        }
        cout << " ";
        if ( m == 0 )
        {
            cout << "o'clock";
        }
        else if (m > 20)
        {
            int b = m % 10;
            int a = m - b;
            cout << eng[a] << " " << eng[b];
        }
        else
        {
            cout << eng[m];
        }
        cout << endl;
    }
    return 0;
}