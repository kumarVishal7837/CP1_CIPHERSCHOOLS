#include<bits/stdc++.h>
using namespace std;

int LongestIncreasingSubsequence(int arr[],int n)
{
	if(n==0)
	{
		return 0;
	}
	int dp[n];
	for(int i=0;i<n;i++)
	{
		dp[i]=1;
	}
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(arr[i]>arr[j] && dp[i]<dp[j]+1)
			{
				dp[i]=dp[j]+1;
			}
		}
	}
	int m=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(dp[i]>m)
		{
			m=dp[i];
		}
	}
	return m;
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
	cout<<LongestIncreasingSubsequence(arr,n)<<endl;
}
