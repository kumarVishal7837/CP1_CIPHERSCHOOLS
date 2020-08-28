#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int x=0;
	int y=INT_MIN;
	for(int i=0;i<n;i++)
	{
		x+=arr[i];
		if(x<arr[i])
		{
			x=arr[i];
		}
		if(y<x)
		{
			y=x;
		}
	}
	cout<<y<<endl;
}
