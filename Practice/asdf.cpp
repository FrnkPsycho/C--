#include <bits/stdc++.h>
using namespace std;
map<string, int> m, m1, m2, m3;
bool cmp(const pair<string, int> &a, const pair<string, int> &b)
{
    return a.second > b.second;
}
int main()
{
    int n;
    while (cin >> n)
    {
        string name;
        int tmp, tp[3];
        for (int i = 0; i < n; i++)
        {
            int all = 0;
            cin >> name;
            for (int i = 0; i < 3; i++)
            {
                cin >> tmp;
                all += tmp;
                tp[i] = tmp;
            }
            m[name] = all;
            m1[name] = tp[0];
            m2[name] = tp[1];
            m3[name] = tp[2];
        }
        vector<pair<string, int>> mm(m.begin(), m.end()), mm1(m1.begin(), m1.end()), mm2(m2.begin(), m2.end()), mm3(m3.begin(), m3.end());
        sort(mm.begin(), mm.end(), cmp);
        sort(mm1.begin(), mm1.end(), cmp);
        sort(mm2.begin(), mm2.end(), cmp);
        sort(mm3.begin(), mm3.end(), cmp);
        for (int i = 0; i < 3; i++)
        {
            cout << mm[i].first << " " << mm[i].second << endl;
        }
        cout << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << mm1[i].first << " " << mm1[i].second << endl;
        }
        cout << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << mm2[i].first << " " << mm2[i].second << endl;
        }
        cout << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << mm3[i].first << " " << mm3[i].second << endl;
        }
        cout << endl;
        m.clear();
        mm.clear();
        mm1.clear();
        mm2.clear();
        mm3.clear();
        m1.clear();
        m2.clear();
        m3.clear();
    }
    return 0;
}