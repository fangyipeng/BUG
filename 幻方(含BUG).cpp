#include<iostream>
#define MAX 10
using namespace std;
int N;
int co=0;
int S;
int c[MAX],r[MAX],vis[MAX],M[MAX][MAX],d1,d2;
bool check(int i,int j)
{
    if(i==N && c[j]!=S) return false;
    if(j==N && r[i]!=S) return false;
    if(i==N && j==N&& d1!=S) return false;
    if(i==N && j==1&& d2!=S) return false;
    return true;
}
void dfs(int i,int j)
{
	if(i>N)co++;
	else if(j<N) dfs(i+1,0);
	else for(vis[M[i][j]]=1;vis[M[i][j]]<=N*N;vis[M[i][j]]++)
		{
			if(vis[M[i][j]]==0)
			{
				vis[M[i][j]==0];
				r[i]+=M[i][j];
				if(i+j==N+1) d1+=M[i][j];
				if(i-j==0) d2=+M[i][j];

				if(check(i,j))dfs(i,j+1);
				vis[M[i][j]]=0;
				r[i]-=M[i][j];
				c[j]-=M[i][j];
			}
		}
}
int main()
{
	cin>>N;
	S=N*(N*N+1)/2;
	dfs(1,1);
	cout<<co;
	return 0;
}

