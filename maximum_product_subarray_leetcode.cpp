#include<bits/stdc++.h>
using namespace std;
int productmax(int arr[],int n)
{
	int cmax=arr[0];
	int cmin=arr[0];
	int pmax=arr[0];
	int pmin=arr[0];
	int res=arr[0];
	for(int i=1;i<n;i++)
	{
		cmax=max(pmax*arr[i],max(pmin*arr[i],arr[i]));
		cmin=min(pmax*arr[i],min(pmin*arr[i],arr[i]));
		res=max(res,cmax);
		pmax=cmax;
		pmin=cmin;
	}
	return res;
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
	cout<<productmax(arr,n);
}
