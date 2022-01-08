#include <bits/stdc++.h>
#define ll long long
#define MAX 100005

using namespace std;

int main()
{
    string dna;
    while ( cin >> dna )
    {
        for ( int i=0 ; i<dna.length() ; i++ )
        {
            if ( dna[i] == 'T' ) dna[i] = 'U';
            else if ( dna[i] == 'U' ) dna[i] = 'T';
        }
        cout << dna << endl;
    }
    return 0;
}