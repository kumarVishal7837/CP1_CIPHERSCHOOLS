#include<bits/stdc++.h>
using namespace std;
int equilibrium(int arr[],int n,int total)
{
	int l=0;
	int r=0;
	int t=total;
	
	for(int i=0;i<n;i++)
	{
		
		t=t-arr[i];
		if(t==l)
		{
			return i;
			
		}
		l+=arr[i];
	}
	return -1;
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	int total=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		total+=arr[i];
	}
	
	cout<<equilibrium(arr,n,total);
}

