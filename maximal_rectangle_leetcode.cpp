#include<bits/stdc++.h>
using namespace std;

int FindArea(vector<int>heights)
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
	int n,m;
	cin>>n>>m;
	vector<vector<int> >v(n,vector<int>(m));
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>v[i][j];
		}
	}
	int maximum=0;
	vector<int>res(v[0].size(),0);
	for(int i=0;i<n;i++)
	{
		
		for(int j=0;j<m;j++)
		{
			if(v[i][j]==0)
			{
				res[j]=0;
			}
			else
			{
				res[j]+=v[i][j];
			}
		}
		
		maximum=max(FindArea(res),maximum);
	}
	cout<<maximum<<endl;
}
