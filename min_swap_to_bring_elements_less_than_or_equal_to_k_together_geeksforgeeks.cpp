#include<bits/stdc++.h>
using namespace std;
int min_swap(int arr[],int n,int k)
{
	int c=0;
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>k)
		{
			c++;
		}
		if(arr[i]<=k && c>0)
		{
			count++;
		}
	}
	return count;
	
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
	int k;
	cin>>k;
	cout<<min_swap(arr,n,k);
}
