#include <bits/stdc++.h>

using namespace std;

int boundary = 10001;
vector<int> prime(boundary, 1);

bool isprime(int num)
{
    return prime[num];
}

int shrink(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != '0')
        {
            str.erase(0,i);
            break;
        }
    }
    return stoi(str);
}

int main()
{
    int t;
    // 高效素数表 10001为边界可修改
    prime[1] = 0 ; prime[0] = 0;
    for ( int i=4 ; i<boundary ; i++ )
    {
        if ( prime[i] == 0 ) continue;
        for ( int j=2 ; j<=(int)sqrt(i) ; j++ )
        {
            if ( i % j == 0 )
            {
                prime[i] = 0;
                break;
            }
            else if ( j == (int)sqrt(i) )
            {
                for ( int k=2 ; k*i<=boundary ; k++)
                {
                    prime[k*i] = 0;
                }
            }
        }
    }

    int n;
    cin >> n;
    vector<int>rank;
    bool checked[10001] = {false};
    for ( int i=0 ; i<n ; i++ )
    {
        string temp;
        cin >> temp;
        rank.push_back(shrink(temp));
    }
    
    int k;
    cin >> k;
    for ( int i=0 ; i<k ; i++ )
    {
        string check;
        int pos;
        bool not_found = false;
        cin >> check;
        int checknum = shrink(check);
        if ( checked[checknum] == true )
        {
            cout << check << ": Checked"<<endl;
        }
        else
        {
            for (int j = 0; j < rank.size(); j++)
            {
                if (rank[j] == checknum)
                {
                    checked[checknum] = true;
                    pos = j + 1;
                    break;
                }
                if ( j==rank.size()-1 ) 
                {
                    not_found = true;
                }
            }
            if ( not_found )
            {
                cout << check << ": Are you kidding?" << endl;
            }
            else if (pos == 1)
                cout << check << ": Mystery Award"<<endl;
            else if ( isprime(pos) )
            {
                cout << check << ": Minion"<<endl;
            }
            else
            {
                cout << check << ": Chocolate" << endl;
            }
        }
        
    } 
    return 0;
}