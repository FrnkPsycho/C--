#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int k=0;
    double sum=0;
    cin >> n;
    for ( int i=0 ; i<n ; i++ )
    {
        bool alpha_invalid = false;
        bool point_invalid = false;
        int point=0;
        int after_point=0;
        string str;
        cin >> str;
        if ( isdigit(str[0]) || str[0] == '-' )
        {
            for ( int m=1 ; m<str.size() ; m++ )
            {
                if ( str[m] == '.' ) point++;
                else if ( isalpha(str[m]) )
                {
                    alpha_invalid = true;
                    break;
                }
                if ( point > 0 ) 
                {
                    if ( isdigit(str[m]) ) after_point++;
                }
            }
            if ( point > 1 || after_point > 2 ) point_invalid = true;
        }
        else alpha_invalid = true;

        if (alpha_invalid || point_invalid || stod(str) > 1000 || stod(str) < -1000)
        {
            cout << "ERROR: " << str << " is not a legal number" << endl;
        }
        else
        {
            k++;
            double num = stod(str);
            sum += num;
        }
    }

    if ( k == 0  )
    {
        cout << "The average of 0 numbers is Undefined" << endl;
    }
    else if ( k == 1)
    {
        cout << "The average of " << k << " number is " << setiosflags(ios::fixed) << setprecision(2) << sum << endl;
    }
    else 
    {
        cout << "The average of " << k << " numbers is " << setiosflags(ios::fixed) << setprecision(2) << sum/k << endl;
    }
    
    return 0;
}