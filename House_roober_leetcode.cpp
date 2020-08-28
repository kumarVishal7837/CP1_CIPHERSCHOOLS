#include<bits/stdc++.h>
using namespace std;

int maxRob(int arr[],int n)
{
	if(n==0)
	{
		return 0;
	}
	int dp[n];
	if(n>=1)
		dp[0]=arr[0];
	if(n>=2)
		dp[1]=max(arr[0],arr[1]);
	for(int i=2;i<n;i++)
	{
		dp[i]=max(dp[i-1],dp[i-2]+arr[i]);
	}
	return dp[n-1];
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
	cout<<maxRob(arr,n)<<endl;
}
