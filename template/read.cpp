#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace chrono;

#define ll long long
#define MAX 100005
void read(int &ss)
{
    ss = 0;
    char ch = getchar();
    while (ch > '9' || ch < '0') ch = getchar();
    while (ch >= '0' && ch <= '9') ss *= 10, ss += ch - '0', ch = getchar();
    return;
}

int main()
{
    int t = 1;
    auto start = system_clock::now();
    // read(t);
    // cout << t;
    // printf("%d",t);
    scanf("%d",&t);
    auto end = system_clock::now();
    auto duration = duration_cast<microseconds>(end-start);
    cout << "It cost " << double(duration.count()) * microseconds::period::num / microseconds::period::den << " to finish." << endl;
    return 0;
}