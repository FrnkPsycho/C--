#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>lucky;
    int d=0;
    for (int i = 1; ; i++)
    {
        if ( d == 1000000 ) break;
        if (i % 6 == 0)
        {
            d++;
            lucky.push_back(i);
        }
           
        else
        {
            string s = to_string(i);
            if (s.length() <= 3)
            {
                for (int j = 0; j < s.length(); j++)
                {
                    if (s[j] == '6')
                    {
                        d++;
                        lucky.push_back(i);
                        break;
                    }
                }
            }
            else
            {
                int len = s.length();
                for ( int j=len-1; j >= len - 3; j--) // 5 4 3 2
                {
                    if (s[j] == '6')
                    {
                        d++;
                        lucky.push_back(i);
                        break;
                    }
                    else continue;
                }
            }
        }
    }
    int n;
    while ( cin>>n )
    {
        cout << lucky[n-1] << endl;
    }

    return 0;
}