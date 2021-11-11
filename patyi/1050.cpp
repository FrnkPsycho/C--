#include <bits/stdc++.h>

using namespace std;

int N,n,m;
int ind=0;
int dir[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
vector<vector<int>>matrix;
vector<int>num;
int total=1;

// void dfs(int x,int y,int step,int direction)
// {
//     int nx,ny;
//     if ( total == N ) 
//     {
//         return;
//     }
//     nx=x;ny=y;
//     if ( direction == 1 ) ny++;
//     else if ( direction == 2 ) nx++;
//     else if ( direction == 3 ) ny--;
//     else if ( direction == 4 ) nx--;

//     if ( ny > n || ny < 1 || nx > m || nx < 1 )
//     {
//         direction++;
//         // matrix[nx][ny] = num[ind];
//         // ind++;
//         dfs(x,y,step+1,direction);
//     }
//     else
//     {
//         if ( matrix[nx][ny] == 0 )
//         {
//             matrix[nx][ny] = num[ind];
//             ind++;
//             total++;
//             dfs(nx,ny,step+1,direction);
//         }
//         else 
//         {
//             direction++;
//             dfs(x,y,step+1,direction);
//         }
//     }
//     return;
// }

int main()
{
    cin >> N;
    // 获得m/n值
    if ( N==1 )
    {
        int t;
        cin >> t;
        cout << t << endl; 
        return 0;
    }
    n=N;
    m = sqrt(n);
    while ( n % m !=0 ) m--;
    n = n / m;
    swap(m,n);

    //初始化矩阵
    matrix.resize(m);
    for ( int i=0 ; i<m ; i++ )
    {
        matrix[i].resize(n,0);
    }

    //读入数据
    num.resize(N,0);
    for ( int i=0 ; i<N ; i++ )
    {
        int temp;
        cin >> temp;
        num.push_back(temp);
    }
    sort(num.rbegin(),num.rend());

    // matrix[1][1] = num[ind];
    // ind++;
    // dfs(1,1,1,1);
    // cout << total;
    int top=0,bottom=m-1,left=0,ri=n-1;
    int i=0,j=0;
    while ( ind<N )
    {
        while ( ind<N && j<ri) matrix[top][j++] = num[ind++];
        while ( ind<N && i<bottom) matrix[i++][ri] = num[ind++];
        while ( ind<N && j>left) matrix[bottom][j--] = num[ind++];
        while ( ind<N && i>top) matrix[i--][left] = num[ind++];
        top++;bottom--;left++;ri--;i=top;j=left;
        if ( ind == N-1 ) matrix[i][j] = num[ind++];
    }
    for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(j==0)
				printf("%d",matrix[i][j]);
			else 
				printf(" %d",matrix[i][j]);
		}
		printf("\n");
	}
    return 0;
}