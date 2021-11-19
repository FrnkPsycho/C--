#include <bits/stdc++.h>

using namespace std;

struct question
{
    int score;
    int number;
    int options;
    int correct_quantity;
    int correct[128] = {0};
    int right=0;
    int wrong;
};

// struct student
// {
//     int 
// };

bool cmp( question &a , question &b )
{
    if ( a.wrong == b.wrong ) return a.number < b.number;
    else return a.wrong > b.wrong;
}

int main()
{
    int stu_quantity,questions;
    vector<question>qu;
    cin >> stu_quantity >> questions;
    for ( int i=0 ; i<questions ; i++ )
    {
        int score,options,corrects;
        cin >> score >> options >> corrects;
        question temp;
        temp.score = score;
        temp.number = i + 1;
        temp.correct_quantity = corrects;
        temp.options = options;
        for ( int j=0 ; j<corrects ; j++ )
        {
            char ch;
            cin >> ch;
            temp.correct[ch] = 1;
        }
        qu.push_back(temp);
    }
    getchar();
    for ( int i=0 ; i<stu_quantity ; i++ )
    {
        string str;
        getline(cin,str);
        int question_number=0;
        int stu_score = 0;
        for ( int t=0 ; t<str.size() ; t++ )
        {
            if ( str[t] == '(' )
            {
                bool isright=true;
                int right_cnt=0;
                int flag=0;
                int opt,oopptt;
                for ( int y=t+1 ; str[y]!=')' ; y++ )
                {
                    if ( isdigit(str[y]) )
                    {
                        opt = str[y] - '0' ;
                        oopptt = opt;
                        flag=1;
                    }
                    else if ( flag && isalpha(str[y]) && opt )
                    {
                        opt--;
                        if ( qu[question_number].correct[str[y]] != 1 ) isright=false;
                        else right_cnt++;
                    }
                    t=y;
                }
                if ( isright && oopptt==qu[question_number].correct_quantity )
                {
                    stu_score += qu[question_number].score;
                    qu[question_number].right++;
                }
                question_number++;
                
            }
        }
        cout << stu_score << endl;
    }

    for ( int i=0 ; i<questions ; i++ )
    {
        qu[i].wrong = stu_quantity - qu[i].right;
    }

    sort(qu.begin(),qu.end(),cmp);  

    if ( qu.size() == 1)
    {
        if ( qu[0].wrong == 0 )
        {
            cout << "Too simple" << endl;
        }
        else
        {
            cout << qu[0].wrong << qu[0].number << endl;
        }
        return 0;
    }

    int count=1;
    while ( qu[count-1].wrong == qu[count].wrong ) count++;
    if ( qu[0].wrong==0 )
    {
        cout << "Too simple" << endl;
        return 0;
    }
    cout << qu[0].wrong << " ";
    for (int i = 0; i < count; i++)
    {
        cout << qu[i].number;
        if ( i!=count-1 ) cout << " ";
    }
}