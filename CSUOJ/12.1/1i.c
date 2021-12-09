#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long

struct student
{
    char num[21];
    int score;
};


int cmp(const void *a,const void *b)
{
    struct student *m = (struct student *)a ;
    struct student *n = (struct student *)b ;

    if ( m->score == n->score  ) return strcmp(m->num,n->num);
    else return m->score < n->score;
}

int main()
{
    int n,m,g;
    
    while ( scanf("%d",&n) != EOF  )
    {
        if ( n == 0 ) return 0;
        else scanf("%d %d",&m,&g);
        int score[11] = {0};
        struct student stu[1001];
        memset(stu,0,sizeof(stu[0])*1001);
        for ( int i=1 ; i<=m ; i++ )
        {
            int t;
            scanf("%d",&t);
            score[i] = t;
        }
        getchar();
        for ( int i=1 ; i<=n ; i++ )
        {
            scanf("%s",&stu[i].num);
            int right;
            scanf("%d",&right);
            for ( int j=1 ; j<=right ; j++ )
            {
                int k;
                scanf("%d",&k);
                stu[i].score += score[k];
            }
        }
        qsort(stu,n+1,sizeof(stu[0]),cmp);
        
        int pass=0;
        for ( int i=0 ; i<n ; i++ )
        {
            if ( stu[i].score >= g ) pass++;
            else if ( stu[i].score < g ) break;
        }
        printf("%d\n",pass);
        for ( int i=0 ; i<pass ; i++ )
        {
            printf("%s %d\n",stu[i].num,stu[i].score);
        }
        
    }
    
    return 0;
}