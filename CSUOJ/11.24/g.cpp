#include <bits/stdc++.h>

using namespace std;

int main()
{
    string oa,ob;
    while ( cin >> oa >> ob )
    {
        vector<int>res;
        string a,b;
        if ( oa.length() > ob.length())
        {
            b = string(oa.length()-ob.length(),'0') + ob;
            a = oa;
        }
        else if ( oa.length() < ob.length() )
        {
            a = string(ob.length() - oa.length() , '0') + oa;
            b = ob;
        }
        else
        {
            a=oa;
            b=ob;
        }

        int i = a.length()-1;
        int carry=0;
        for ( i ; i>=0 ; i-- )
        {
            int sum = (a[i] - '0') + (b[i] - '0') + carry;
            carry = 0;
            if ( sum >= 10 )
            {
                carry = sum/10;
                sum %= 10;
            }
            res.push_back(sum);
        }
        if ( carry > 0 ) res.push_back(carry);
        cout << oa << " + " << ob << " = ";
        for ( int i=res.size()-1 ; i>=0 ; i-- )
        {
            cout << res[i];
        }
        cout << endl;
    }
    
    return 0;
}