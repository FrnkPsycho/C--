
#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
    map<string, int> map; //map用于判断改昵称是否已经获奖
    int n, m, s;
    int count = 0;
    cin >> m >> n >> s;
    string name[1001], str;
    for (int i = 0; i < m; i++)
    {
        cin >> str;
        if (i == 0 || str != name[count - 1]) //与前面进行的比较，去重
            name[count++] = str;
    }
    if (m < s)
        cout << "Keep going..." << endl;
    else
        for (int i = s - 1; i < m; i += n)
        {
            while (map[name[i]] != 0) //如果一个人已经获奖，就要“一直”往下找
                i++;
            cout << name[i] << endl;
            map[name[i]]++;
        }
    return 0;
}