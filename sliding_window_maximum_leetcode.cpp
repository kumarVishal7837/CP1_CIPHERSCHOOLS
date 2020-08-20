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
	
	deque<int>q(k);
	int j;
	for(j=0;j<k;j++)
	{
		while(!q.empty() && arr[j]>=arr[q.back()])
		{
			q.pop_back();
			
		}
		q.push_back(j);
		
	}
	
	for(;j<n;j++)
	{
		cout<<arr[q.front()]<<" ";
		while(!q.empty() && q.front()<=j-k)
		{
			q.pop_front();
		}
		while(!q.empty() && arr[j]>=arr[q.back()])
		{
			q.pop_back();
			
		}
		q.push_back(j);
	}
	cout<<arr[q.front()]<<endl;
}
