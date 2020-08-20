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
	int k;
	cin>>k;
	deque<int>q;
	int j;
	int x=0;
	for(j=0;j<k;j++)
	{
		if(arr[j]<0)
		{
			q.push_back(j);
		}
	}
	for(;j<n;j++)
	{
		if(q.empty())
		{
			cout<<x<<" ";
		}
		else
		{
			cout<<arr[q.front()]<<" ";
		}
		
		while(!q.empty() && q.front()<=j-k )
		{
			q.pop_front();
		}
		if(arr[j]<0)
		{
			q.push_back(j);
		}
	}
	if(!q.empty())
	{
		cout<<arr[q.front()]<<endl;
	}
	else
	{
		cout<<x<<endl;
	}
		
}
