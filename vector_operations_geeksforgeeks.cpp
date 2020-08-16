#include<bits/stdc++.h>
using namespace std;
void add_element(vector<int>&v ,int x)
{
	v.push_back(x);
	
	
}

void sort_vector(vector<int>&v)
{
	sort(v.begin(),v.end());
	
}

void reverse_vector(vector<int>&v)
{
	reverse(v.begin(),v.end());
	
}
void print_size(vector<int>&v)
{
	cout<<v.size()<<endl;
	
}

void print_vector(vector<int>&v)
{
	for(auto i=v.begin();i!=v.end();i++)
	{
		cout<<*i<<" ";
	}
	cout<<endl;
	
}

void sort_des(vector<int>&v)
{
	sort(v.begin(),v.end(),greater<int>());
	
}
int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		while(n--)
		{
			vector<int>v;
			char ch;
			cin>>ch;
			if(ch=='a')
			{
				int x;
				cin>>x;
				add_element(v,x);
				
			}
			if(ch=='b')
			{
				sort_vector(v);
			}
			if(ch=='c')
			{
				reverse_vector(v);
			}
			if(ch=='d')
			{
				print_size(v);
			}
			if(ch=='e')
			{
				print_vector(v);
			}
			if(ch=='f')
			{
				sort_des(v);
			}
		}
	}
}
