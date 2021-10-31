#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    int i,j,t,n;
    string l;
    char te;
    
    vector<int>book(27,0);
    vector<int>maxchar;
    getline(cin,l);
       
    for ( i=0 ; i<l.length() ; i++ )
    {
        l[i] = tolower(l[i]);
        if ( islower(l[i]) )
        {
            book[l[i]-'a'] ++;
        }
        
    }
    int max=0;
    for ( i=0 ; i<26 ; i++ )
    {
        if ( book[i] > max )
        {

            max = book[i];
            te = i;

        }
    }

    printf("%c %d\n",te+'a',max);
    return 0;
}