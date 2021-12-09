#include <bits/stdc++.h>

using namespace std;

void top(int layer)
{
    char line[300] = {'\0'};
    int len = layer * 2 - 1;
    char ch = 'a';
    int i=0,j=len-1;
    for ( ; i!=j ; i++,j--)
    {
        line[i] = ch;
        line[j] = ch;
        ch++;
    }
    line[i] = ch;
    for ( int i=0 ; i<len ; i++ )
    {
        cout << line[i];
    }
}

void bottom(int layer)
{
    if ( layer== 1 ) 
    {
        cout << 'a';
        return;
    }
    char line[300] = {'\0'};
    int len = layer * 2 - 1;
    char ch = 'a';
    int i = 0, j = len - 1;
    line[i] = 'a';line[j] = 'a';
    i++;j--;
    for (; i != j; i++, j--)
    {
        line[i] = ' ';
        line[j] = ' ';
    }
    line[i]=' ';line[j]=' ';
    for (int i = 0; i < len; i++)
    {
        cout << line[i];
    }
}

int main()
{
    int t;
    cin >> t;
    while ( t-- )
    {
        int n;
        cin >> n;
        int longest = 2*n-1;
        int space = n-1;
        for ( int i=0 ; i<n ; i++ )
        {
            for ( int j=0; j<space ; j++ )
            {
                cout<<" ";
            }
            top(i+1);
            for (int j = 0; j < space; j++)
            {
                cout << " ";
            }
            space--;
            cout << endl;
        }
        space++;
        for (int i = n-1; i >= 0; i--)
        {
            for (int j = 0; j < space; j++)
            {
                cout << " ";
            }
            bottom(i + 1);
            for (int j = 0; j < space; j++)
            {
                cout << " ";
            }
            space++;
            cout << endl;
        }
        cout<< endl;
    }
    return 0;
}