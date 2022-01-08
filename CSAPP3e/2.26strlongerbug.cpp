#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

int strlonger(char *s,char *t)
{
    return strlen(s) - strlen(t) > 0;
}

int main()
{
    char s[10];
    char t[10];
    cin >> s >> t;
    cout << strlonger(s,t);
    return 0;
}