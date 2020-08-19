#include<bits/stdc++.h>
using namespace std;
int area(vector<int>&heights)
{
	int n=heights.size();
	if(n==0)
	{
		return 0;
	}
	if(n==1)
	{
		return heights[0];
	}
	stack<int>s;
	int i;
	int a=0;
	int m=0;
	for(i=0;i<n;)
	{
		if(s.empty() || heights[s.top()]<=heights[i])
		{
			s.push(i++);
		}
		else
		{
			int x=s.top();
			s.pop();
			if(s.empty())
			{
				a=((heights[x])*(i));	
			}
			else
			{
				a=((heights[x])*((i-s.top()-1)));
			}
			if(a>m)
			{
				m=a;
			}
		}
	}
	while(!s.empty())
	{
		int y=s.top();
		s.pop();
		if(s.empty())
		{
			a=((heights[y])*(i));	
		}
		else
		{
			a=((heights[y])*((i-s.top()-1)));
		}
		if(a>m)
		{
			m=a;
		}
	}
	return m;
	
}
int main()
{
	vector<int>v;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	cout<<area(v);
}
