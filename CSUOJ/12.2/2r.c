#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long

int cmp(const void *a,const void *b)
{
    return *(int *)a - *(int *)b;
}

int main()
{
    int t;
    while ( ~scanf("%d",&t) )
    {
        while ( t-- )
        {
            int minhh = 9999;
            char dna[51][1001] = {'\0'};
            int dnshh[51] = {0};
            int m,n;
            scanf("%d %d",&m,&n);
            for ( int i=0 ; i<m ; i++ )
            {
                scanf("%s",&dna[i]);
            }

            int p=0;
            char res[1001] = {'\0'};
            char dnachar[4] = {'A','C','G','T'};
            int sum=0;
            for ( int j=0 ; j<n ; j++ )
            {
                int cnt[4] = {0}; // ACGT
                int max=-1;
                int pos=0;
                for ( int i=0 ; i<m ; i++ ) 
                {
                    if ( dna[i][j] == 'A' ) cnt[0]++;
                    else if ( dna[i][j] == 'C' ) cnt[1]++;
                    else if ( dna[i][j] == 'G' ) cnt[2]++;
                    else if ( dna[i][j] == 'T' ) cnt[3]++;
                }
                for ( int i = 0; i < 4; i++)
                {
                    if (cnt[i] > max)
                    {
                        max = cnt[i];
                        pos = i;
                    }
                }
                    
                // qsort(cnt,4,sizeof(int),cmp);
                res[p++] = dnachar[pos];
                sum+=m-cnt[pos];
            }
            
            printf("%s\n",res);
            printf("%d\n",sum);
        }
    }
    return 0;
}