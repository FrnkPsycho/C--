#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

typedef unsigned char * byte_pointer;

bool is_little_endian()
{
    int test_num = 0xff;
    byte_pointer head = (byte_pointer) &test_num;
    cout << head << endl;
    if ( head[0] == 0xff ) return true;
    else return false;
}

int main()
{
    cout << is_little_endian();
    return 0;
}