#define FILEIO

#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace chrono;
#define ll long long
#define MAX 100005

void read(ll &ss)
{
    int f = 1;
    ss = 0;
    char ch = getchar();
    while (ch > '9' || ch < '0')
    {
        if (ch == '-')
            f = -1;
        ch = getchar();
    }
    while (ch <= '9' && ch >= '0')
        ss *= 10, ss += ch - '0', ch = getchar();
    ss *= f;
    return;
}

int main()
{
    #ifdef FILEIO
        freopen("data.in", "r", stdin);
        freopen("data.out", "w", stdout);
    #endif

    ll n;
    auto start = system_clock::now();
    // read(t);
    // cout << t;
    // printf("%d",t);
    // scanf("%lld", &n);
    read(n);
    auto end = system_clock::now();
    auto duration = duration_cast<microseconds>(end - start);
    cout << "It cost " << double(duration.count()) * microseconds::period::num / microseconds::period::den << " to finish." << endl;

    fclose(stdin);
    fclose(stdout);
    return 0;
}