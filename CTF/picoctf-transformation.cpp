#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

int main()
{
    int sum[19] = {28777,25455,17236,18043,12598,24418,26996,29535,26990,29556,13108,25695,28518,24376,24421,14128,13154,13368,13949};
    for ( int i=0; i<19 ; i++ ) {
        for ( int j=0; j<126; j++ ) {
            if ( (sum[i] - (j<<8)) <= 126 && (sum[i] - (j<<8)) > 0 ) {
                printf("%c%c", j, sum[i] - (j<<8));
            }
        }
    }
    return 0;
}