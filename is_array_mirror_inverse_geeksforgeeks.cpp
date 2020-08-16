#include<bits/stdc++.h>
using namespace std;

bool check_inverse(int arr[],int n)
{
	int a[n];
	for(int i=0;i<n;i++)
	{
		a[arr[i]]=i;
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]!=a[i])
		{
			return false;
		}
	}
	return true;
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
	if(check_inverse(arr,n))
	{
		cout<<"Yes"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	}
}
