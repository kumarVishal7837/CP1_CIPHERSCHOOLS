#include<bits/stdc++.h>
using namespace std;

 bool Helper(int nums[],int t,int n)
    {
    	if(n==0 || n==1)
    	{
    		return false;
		}
          bool dp[n][t+1];
            for(int i=0;i<n;i++)
        {
            for(int j=0;j<=t;j++)
            {
                dp[i][j]=false;
            }
            
        }
            for(int i=0;i<n;i++)
            {
                dp[i][0]=true;
            }
            for(int j=0;j<=t;j++)
            {
                if(nums[0]==j)
                {
                    dp[0][j]=true;
                }
            }
            for(int i=1;i<n;i++)
            {
                for(int j=1;j<=t;j++)
                {
                    
                   if(dp[i-1][j])
                   {
                       dp[i][j]=true;
                   }
                    else 
                    {
                        if(j>=nums[i])
                        {
                            dp[i][j]=dp[i-1][j-nums[i]];
                        }
                    }
                }
            }
        return dp[n-1][t];
    }
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int ts=0;
        for(int i=0;i<n;i++)
        {
            ts+=arr[i];
        }
        if(ts%2!=0)
        {
            return false;
        }
        int target=ts/2;
        
        cout<<Helper(arr,target,n);
}
