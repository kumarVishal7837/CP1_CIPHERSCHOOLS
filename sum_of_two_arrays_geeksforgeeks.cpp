#include<bits/stdc++.h>
using namespace std;

void addition(int arr1[],int arr2[],int n,int m)
{
	vector<int>v;
	int c=0;
	int k=n-m-1;
	for(int i=m-1,j=n-1;i>=0;i--,j--)
	{
		int x=arr1[j]+arr2[i]+c;
		c=x/10;
		v.push_back(x%10);
	}
	for(int i=k;i>=0;i--)
	{
		int y=arr1[i]+c;
		c=y/10;
		v.push_back(y%10);
	}
	
	if(c!=0)
	{
		v.push_back(c);
	}
	
	for(int i=v.size()-1;i>=0;i--)
	{
		cout<<v[i]<<" ";
	}
	return;
}

int main()
{
	int n,m;
	cin>>n>>m;
	int arr1[n];
	int arr2[m];
	for(int i=0;i<n;i++)
	{
		cin>>arr1[i];
	}
	for(int i=0;i<m;i++)
	{
		cin>>arr2[i];
	}
	if(n>=m)
	{
		addition(arr1,arr2,n,m);
	}
	else
	{
		addition(arr2,arr1,m,n);
	}
	
}
