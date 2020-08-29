#include<bits/stdc++.h>
using namespace std;
int Area(vector<vector<int> >v)
{
	int n=v.size();
	if(n==0)
    {
        return 0;
    }
	int m=v[0].size();
	if(n==1)
        {
            for(int i=0;i<m;i++)
            {
                if(v[0][i]=='1')
                {
                    return 1;
                }
                
            }
            return 0;
        }
	
	int dp[n+1][m+1];
	int a=0;
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			if(i==0 || j==0)
			{
				dp[i][j]=0;
				
			}
			else
			{
				if(v[i-1][j-1]==1)
				{
					dp[i][j]=min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]))+1;
					if(dp[i][j]>a)
					{
						a=dp[i][j];
					}
				}
				else
				{
					dp[i][j]=0;
				}
				
			}
		}
	}
	return a*a;
}
int main()
{
	
	int n,m;
	cin>>n>>m;
	vector<vector<int> >v(n,vector<int>(m));
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>v[i][j];
		}
	}
	
	cout<<Area(v);
	
}
