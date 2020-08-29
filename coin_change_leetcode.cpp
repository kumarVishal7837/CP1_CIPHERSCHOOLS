#include<bits/stdc++.h>
using namespace std;
int coin(vector<int>coins,int n,int amount)
{
	if(n==0)
        {
            return -1;
        }

        int dp[amount+1];
        dp[0]=0;
        for(int i=1;i<=amount;i++)
        {
            dp[i]=INT_MAX;
        }
        for(int i=1;i<=amount;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(coins[j]<=i)
                {
                    int x=dp[i-coins[j]];
                    if(x!=INT_MAX && x+1<dp[i])
                    {
                        dp[i]=x+1;
                    }
                }
            }
        }
        if(dp[amount]==INT_MAX)
        {
            return -1;
        }
        return dp[amount];
}
int main()
{
	int n;
	cin>>n;
	vector<int>v;
	while(n--)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	int amount;
	cin>>amount;
	cout<<coin(v,v.size(),amount);
}
